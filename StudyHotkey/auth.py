import hashlib
import hmac
import json
import os
import secrets
import base64
import ctypes
from pathlib import Path

from ctypes import wintypes
from cryptography.fernet import Fernet, InvalidToken

try:
    import winreg
except ImportError:
    winreg = None


APP_DIR = Path(__file__).resolve().parent
PASSWORD_FILE = APP_DIR / "senha.json"
ACTIVATION_FILE = APP_DIR / "ativacao.json"
ENCRYPTED_API_KEY_FILE = APP_DIR / "api_key.enc"
LOCAL_API_KEY_FILE = APP_DIR / "api_key.local"
PBKDF2_ITERATIONS = 600_000


class _DataBlob(ctypes.Structure):
    _fields_ = [("cbData", wintypes.DWORD), ("pbData", ctypes.POINTER(ctypes.c_byte))]


def _write_json(path: Path, data: dict) -> None:
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(data, indent=2), encoding="utf-8")
    temporary.replace(path)


def _password_digest(password: str, salt: bytes, iterations: int) -> bytes:
    return hashlib.pbkdf2_hmac(
        "sha256", password.encode("utf-8"), salt, iterations
    )


def _fernet_for_password(password: str, salt: bytes) -> Fernet:
    key = _password_digest(password, salt, PBKDF2_ITERATIONS)
    return Fernet(base64.urlsafe_b64encode(key))


def _dpapi_protect(data: bytes) -> bytes:
    buffer = ctypes.create_string_buffer(data)
    source = _DataBlob(len(data), ctypes.cast(buffer, ctypes.POINTER(ctypes.c_byte)))
    target = _DataBlob()
    if not ctypes.windll.crypt32.CryptProtectData(
        ctypes.byref(source), "StudyHotkey", None, None, None, 0,
        ctypes.byref(target),
    ):
        raise ctypes.WinError()
    try:
        return ctypes.string_at(target.pbData, target.cbData)
    finally:
        ctypes.windll.kernel32.LocalFree(target.pbData)


def _dpapi_unprotect(data: bytes) -> bytes:
    buffer = ctypes.create_string_buffer(data)
    source = _DataBlob(len(data), ctypes.cast(buffer, ctypes.POINTER(ctypes.c_byte)))
    target = _DataBlob()
    if not ctypes.windll.crypt32.CryptUnprotectData(
        ctypes.byref(source), None, None, None, None, 0,
        ctypes.byref(target),
    ):
        raise ctypes.WinError()
    try:
        return ctypes.string_at(target.pbData, target.cbData)
    finally:
        ctypes.windll.kernel32.LocalFree(target.pbData)


def protect_api_key_for_distribution(api_key: str, password: str) -> None:
    if not api_key.strip():
        raise ValueError("A chave da API esta vazia.")
    if not verify_password(password):
        raise PermissionError("A senha esta incorreta.")
    salt = secrets.token_bytes(16)
    token = _fernet_for_password(password, salt).encrypt(api_key.strip().encode("utf-8"))
    _write_json(
        ENCRYPTED_API_KEY_FILE,
        {"version": 1, "salt": salt.hex(), "token": token.decode("ascii")},
    )
    LOCAL_API_KEY_FILE.unlink(missing_ok=True)


def _decrypt_distribution_api_key(password: str) -> str:
    try:
        data = json.loads(ENCRYPTED_API_KEY_FILE.read_text(encoding="utf-8"))
        salt = bytes.fromhex(data["salt"])
        token = data["token"].encode("ascii")
        return _fernet_for_password(password, salt).decrypt(token).decode("utf-8")
    except (OSError, ValueError, TypeError, KeyError, InvalidToken, UnicodeError):
        return ""


def load_protected_api_key() -> str:
    if not LOCAL_API_KEY_FILE.exists():
        return ""
    try:
        protected = base64.b64decode(LOCAL_API_KEY_FILE.read_bytes(), validate=True)
        return _dpapi_unprotect(protected).decode("utf-8").strip()
    except (OSError, ValueError, UnicodeError):
        return ""


def _load_password_data() -> dict | None:
    if not PASSWORD_FILE.exists():
        return None
    try:
        data = json.loads(PASSWORD_FILE.read_text(encoding="utf-8"))
        if not all(key in data for key in ("salt", "digest", "iterations")):
            return None
        return data
    except (OSError, ValueError, TypeError):
        return None


def password_is_configured() -> bool:
    return _load_password_data() is not None


def verify_password(password: str) -> bool:
    data = _load_password_data()
    if data is None:
        return False
    try:
        salt = bytes.fromhex(data["salt"])
        expected = bytes.fromhex(data["digest"])
        iterations = int(data["iterations"])
    except (ValueError, TypeError):
        return False
    actual = _password_digest(password, salt, iterations)
    return hmac.compare_digest(actual, expected)


def configure_password(new_password: str, current_password: str | None = None) -> None:
    if len(new_password) < 8:
        raise ValueError("A senha precisa ter pelo menos 8 caracteres.")
    if not password_is_configured():
        raise FileNotFoundError("O arquivo-base senha.json esta ausente.")
    if not verify_password(current_password or ""):
        raise PermissionError("A senha atual esta incorreta.")

    api_key = _decrypt_distribution_api_key(current_password or "")
    if not api_key:
        raise ValueError("Nao foi possivel recriptografar a chave da API.")

    salt = secrets.token_bytes(16)
    digest = _password_digest(new_password, salt, PBKDF2_ITERATIONS)
    _write_json(
        PASSWORD_FILE,
        {
            "version": 1,
            "algorithm": "pbkdf2-sha256",
            "iterations": PBKDF2_ITERATIONS,
            "salt": salt.hex(),
            "digest": digest.hex(),
        },
    )
    ACTIVATION_FILE.unlink(missing_ok=True)
    LOCAL_API_KEY_FILE.unlink(missing_ok=True)
    protect_api_key_for_distribution(api_key, new_password)


def _machine_source() -> str:
    if winreg is not None:
        try:
            access = winreg.KEY_READ | getattr(winreg, "KEY_WOW64_64KEY", 0)
            with winreg.OpenKey(
                winreg.HKEY_LOCAL_MACHINE,
                r"SOFTWARE\Microsoft\Cryptography",
                0,
                access,
            ) as key:
                machine_guid, _ = winreg.QueryValueEx(key, "MachineGuid")
                if machine_guid:
                    return str(machine_guid)
        except OSError:
            pass
    return f"{os.getenv('COMPUTERNAME', '')}|{os.getenv('PROCESSOR_IDENTIFIER', '')}"


def machine_fingerprint() -> str:
    return hashlib.sha256(_machine_source().encode("utf-8")).hexdigest()


def _activation_signature(fingerprint: str, password_digest: str) -> str:
    return hmac.new(
        bytes.fromhex(password_digest),
        fingerprint.encode("ascii"),
        hashlib.sha256,
    ).hexdigest()


def activation_status() -> str:
    password_data = _load_password_data()
    if password_data is None:
        return "password_missing"
    if not ACTIVATION_FILE.exists():
        return "not_activated"

    try:
        activation = json.loads(ACTIVATION_FILE.read_text(encoding="utf-8"))
        saved_fingerprint = activation["machine"]
        saved_signature = activation["signature"]
    except (OSError, ValueError, TypeError, KeyError):
        return "invalid"

    current_fingerprint = machine_fingerprint()
    if not hmac.compare_digest(saved_fingerprint, current_fingerprint):
        return "other_machine"

    expected_signature = _activation_signature(
        current_fingerprint, password_data["digest"]
    )
    if not hmac.compare_digest(saved_signature, expected_signature):
        return "invalid"
    return "active"


def activate(password: str) -> bool:
    password_data = _load_password_data()
    if password_data is None or not verify_password(password):
        return False

    api_key = _decrypt_distribution_api_key(password)
    if not api_key:
        return False

    protected_api_key = _dpapi_protect(api_key.encode("utf-8"))
    LOCAL_API_KEY_FILE.write_bytes(base64.b64encode(protected_api_key))

    fingerprint = machine_fingerprint()
    _write_json(
        ACTIVATION_FILE,
        {
            "version": 1,
            "machine": fingerprint,
            "signature": _activation_signature(fingerprint, password_data["digest"]),
        },
    )
    return True
