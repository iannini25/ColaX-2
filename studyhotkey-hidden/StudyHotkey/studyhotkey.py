import base64
import csv
import ctypes
import io
import json
import os
import re
import socket
import sys
import threading
import time
import tkinter as tk
from datetime import datetime
from pathlib import Path
from tkinter import messagebox, simpledialog

# Usa primeiro as bibliotecas que acompanham o projeto. Assim, nao e necessario
# executar pip install na maquina de destino.
if not getattr(sys, "frozen", False):
    VENDOR_DIR = Path(__file__).resolve().parent / "vendor"
    python_tag = f"cp{sys.version_info.major}{sys.version_info.minor}"
    vendor_ok = VENDOR_DIR.is_dir()
    if vendor_ok:
        imaging_binaries = list((VENDOR_DIR / "PIL").glob("_imaging.cp*-win_amd64.pyd"))
        if imaging_binaries:
            vendor_ok = any(python_tag in path.name for path in imaging_binaries)
    if vendor_ok:
        sys.path.insert(0, str(VENDOR_DIR))

import pyautogui
import requests
from PIL import Image, ImageChops
from pynput import keyboard, mouse

try:
    import msvcrt
except ImportError:
    msvcrt = None


AI_PROMPT = ""
AI_USER_INSTRUCTION = (
    "Encontre a questao principal na imagem, resolva com cuidado e siga exatamente "
    "o formato de resposta definido pelo prompt da materia."
)
AI_MAX_TOKENS = 80
AI_MAX_COMPLETION_TOKENS = None
AI_TEMPERATURE = 0
SHOW_ONLY_FINAL_ANSWER = False
ANSWER_POSTPROCESSOR = None
AI_RESPONSE_FORMAT = None
IMAGE_PREPROCESSOR = None

TEXT_RESPONSE_FORMAT = {
    "type": "json_schema",
    "json_schema": {
        "name": "resposta_academica",
        "strict": True,
        "schema": {
            "type": "object",
            "properties": {
                "analise": {"type": "string"},
                "letra": {"type": "string"},
                "alternativa": {"type": "string"},
                "resposta": {"type": "string"},
            },
            "required": ["analise", "letra", "alternativa", "resposta"],
            "additionalProperties": False,
        },
    },
}


def extract_confirmed_option(answer: str) -> str:
    matches = re.findall(
        r"(?im)^\s*CONFERENCIA\s*:\s*([A-E])\s*=\s*\S.+$",
        answer,
    )
    return matches[-1].upper() if matches else ""


def extract_structured_answer(answer: str) -> str:
    try:
        data = json.loads(answer)
    except (json.JSONDecodeError, TypeError):
        return ""

    if not isinstance(data, dict):
        return ""

    response = str(data.get("resposta", "")).strip()
    letter = str(data.get("letra", "")).strip().upper()
    alternative = str(data.get("alternativa", "")).strip()
    if re.fullmatch(r"(?i)ERP|ERQ|Err\.?", response):
        return "Err." if response.lower().startswith("err") else response.upper()

    normalized_response = response.upper()
    if re.fullmatch(r"[A-E]", normalized_response):
        return normalized_response if letter == normalized_response and alternative else "Err."

    if re.fullmatch(r"[A-E](?:\s*,\s*[A-E])+", normalized_response):
        normalized_letter = re.sub(r"\s+", "", letter)
        normalized_response = re.sub(r"\s+", "", normalized_response)
        return normalized_response if normalized_letter == normalized_response and alternative else "Err."

    if response and len(response) <= 500:
        return response
    return ""


def neutralize_selection_marks(image):
    width, height = image.size
    top = max(0, int(height * 0.12))
    region = image.crop((0, top, width, height))
    hue, saturation, _ = region.convert("HSV").split()
    hue_mask = hue.point(lambda value: 255 if 150 <= value <= 215 else 0)
    saturation_mask = saturation.point(lambda value: 255 if value >= 55 else 0)
    purple_mask = ImageChops.multiply(hue_mask, saturation_mask)

    mask_values = (
        purple_mask.get_flattened_data()
        if hasattr(purple_mask, "get_flattened_data")
        else purple_mask.getdata()
    )
    purple_points = {
        (index % width, index // width)
        for index, value in enumerate(mask_values)
        if value
    }
    removable_points = set()
    while purple_points:
        start = purple_points.pop()
        component = {start}
        pending = [start]
        while pending:
            x, y = pending.pop()
            for neighbor in (
                (x - 1, y - 1), (x, y - 1), (x + 1, y - 1),
                (x - 1, y),                     (x + 1, y),
                (x - 1, y + 1), (x, y + 1), (x + 1, y + 1),
            ):
                if neighbor in purple_points:
                    purple_points.remove(neighbor)
                    component.add(neighbor)
                    pending.append(neighbor)

        xs = [point[0] for point in component]
        ys = [point[1] for point in component]
        if max(xs) - min(xs) <= 50 and max(ys) - min(ys) <= 50:
            removable_points.update(component)

    selection_mask = Image.new("L", region.size, 0)
    selection_pixels = selection_mask.load()
    for x, y in removable_points:
        selection_pixels[x, y] = 255
    region.paste((255, 255, 255), mask=selection_mask)

    sanitized = image.copy()
    sanitized.paste(region, (0, top))
    return sanitized


def configure_fast_text_subject(model_env_name: str) -> None:
    global MODEL, AI_MAX_COMPLETION_TOKENS, AI_TEMPERATURE
    global SHOW_ONLY_FINAL_ANSWER, FALLBACK_ON_ERR, AI_RESPONSE_FORMAT
    global ANSWER_POSTPROCESSOR, IMAGE_PREPROCESSOR
    global INPUT_COST_PER_1M, OUTPUT_COST_PER_1M

    MODEL = os.getenv(model_env_name, "gpt-5.6-sol")
    AI_MAX_COMPLETION_TOKENS = 800
    AI_TEMPERATURE = None
    SHOW_ONLY_FINAL_ANSWER = True
    FALLBACK_ON_ERR = False
    AI_RESPONSE_FORMAT = TEXT_RESPONSE_FORMAT
    ANSWER_POSTPROCESSOR = extract_structured_answer
    IMAGE_PREPROCESSOR = None
    INPUT_COST_PER_1M = float(os.getenv("STUDYHOTKEY_INPUT_COST_PER_1M", "4.00"))
    OUTPUT_COST_PER_1M = float(os.getenv("STUDYHOTKEY_OUTPUT_COST_PER_1M", "20.00"))

API_URL = os.getenv("STUDYHOTKEY_API_URL", "https://api.openai.com/v1/chat/completions")
MODEL = os.getenv("STUDYHOTKEY_MODEL", "gpt-4o")
IMAGE_DETAIL = os.getenv("STUDYHOTKEY_IMAGE_DETAIL", "original")
MAX_IMAGE_SIZE = int(os.getenv("STUDYHOTKEY_MAX_IMAGE_SIZE", "2400"))
JPEG_QUALITY = int(os.getenv("STUDYHOTKEY_JPEG_QUALITY", "88"))
FALLBACK_IMAGE_DETAIL = os.getenv("STUDYHOTKEY_FALLBACK_IMAGE_DETAIL", "high")
FALLBACK_MAX_IMAGE_SIZE = int(os.getenv("STUDYHOTKEY_FALLBACK_MAX_IMAGE_SIZE", "2000"))
FALLBACK_JPEG_QUALITY = int(os.getenv("STUDYHOTKEY_FALLBACK_JPEG_QUALITY", "92"))
FALLBACK_ON_ERR = os.getenv("STUDYHOTKEY_FALLBACK_ON_ERR", "1") == "1"
CAPTURE_MODE = os.getenv("STUDYHOTKEY_CAPTURE_MODE", "cursor")
CURSOR_REGION_WIDTH = int(os.getenv("STUDYHOTKEY_CURSOR_REGION_WIDTH", "800"))
CURSOR_REGION_HEIGHT = int(os.getenv("STUDYHOTKEY_CURSOR_REGION_HEIGHT", "850"))
TIMEOUT_SECONDS = 18
COOLDOWN_SECONDS = 2
RETRY_DELAYS = (1, 2)
HIDE_FROM_TASKBAR = False


def runtime_dir() -> Path:
    if getattr(sys, "frozen", False):
        return Path(sys.executable).resolve().parent
    return Path(__file__).resolve().parent


APP_DIR = runtime_dir()
PROJECT_DIR = APP_DIR if getattr(sys, "frozen", False) else APP_DIR.parent
LOCK_PORT = int(os.getenv("STUDYHOTKEY_LOCK_PORT", "47831"))


def ensure_runtime_artifacts() -> None:
    for name in ("last_error.txt", "last_answer_raw.txt", "last_status.txt"):
        path = APP_DIR / name
        if not path.exists():
            path.write_text("", encoding="utf-8")

    screenshot_path = APP_DIR / "last_screenshot.jpg"
    if not screenshot_path.exists():
        Image.new("RGB", (1, 1), "white").save(
            screenshot_path,
            format="JPEG",
            quality=90,
        )


def hide_window_from_taskbar(window) -> None:
    if not HIDE_FROM_TASKBAR or sys.platform != "win32":
        return

    try:
        window.overrideredirect(True)
        window.attributes("-toolwindow", True)
        window.update_idletasks()
        hwnd = window.winfo_id()
        parent = ctypes.windll.user32.GetParent(hwnd)
        if parent:
            hwnd = parent
        gwl_exstyle = -20
        ws_ex_appwindow = 0x00040000
        ws_ex_toolwindow = 0x00000080
        style = ctypes.windll.user32.GetWindowLongW(hwnd, gwl_exstyle)
        style = (style | ws_ex_toolwindow) & ~ws_ex_appwindow
        ctypes.windll.user32.SetWindowLongW(hwnd, gwl_exstyle, style)
    except tk.TclError:
        pass
    except OSError:
        pass


INPUT_COST_PER_1M = float(os.getenv("STUDYHOTKEY_INPUT_COST_PER_1M", "0.15"))
OUTPUT_COST_PER_1M = float(os.getenv("STUDYHOTKEY_OUTPUT_COST_PER_1M", "0.60"))


class StudyHotkeyApp:
    def __init__(self) -> None:
        if not AI_PROMPT.strip():
            raise SystemExit("Nenhuma materia foi configurada para o StudyHotkey.")

        ensure_runtime_artifacts()

        self.lock_socket = self.acquire_socket_lock()
        self.lock_file = self.acquire_file_lock()
        if self.lock_socket is None or self.lock_file is None:
            raise SystemExit("StudyHotkey ja esta em execucao.")

        self.root = tk.Tk()
        self.root.withdraw()
        self.root.title("")
        hide_window_from_taskbar(self.root)
        self.ensure_api_key()

        self.modal = None
        self.busy = False
        self.last_capture_at = 0
        self.hotkeys = self.build_hotkeys()

        self.listener = keyboard.Listener(
            on_press=self.on_key_press,
            on_release=self.on_key_release,
        )
        self.mouse_listener = mouse.Listener(on_click=self.on_mouse_click)

    def ensure_api_key(self) -> None:
        if self.load_api_key():
            return

        api_key = simpledialog.askstring(
            "StudyHotkey",
            "Cole a chave da API da OpenAI. Ela sera salva somente neste computador.",
            parent=self.root,
        )
        api_key = (api_key or "").strip()
        if not api_key or not self.is_valid_api_key_value(api_key):
            messagebox.showwarning(
                "StudyHotkey",
                "A chave da API nao foi informada. O aplicativo nao foi iniciado.",
                parent=self.root,
            )
            raise SystemExit("OPENAI_API_KEY nao configurada.")

        key_path = APP_DIR / "openai_key.txt"
        key_path.write_text(api_key, encoding="utf-8")

    def acquire_socket_lock(self):
        lock_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            lock_socket.bind(("127.0.0.1", LOCK_PORT))
            lock_socket.listen(1)
            return lock_socket
        except OSError:
            lock_socket.close()
            return None

    def acquire_file_lock(self):
        if msvcrt is None:
            return object()

        lock_file = (APP_DIR / "StudyHotkey.lock").open("w", encoding="utf-8")
        try:
            msvcrt.locking(lock_file.fileno(), msvcrt.LK_NBLCK, 1)
            return lock_file
        except OSError:
            lock_file.close()
            return None

    def build_hotkeys(self):
        hotkey_actions = (
            ("<ctrl>+<shift>+0", self.start_capture),
            ("<ctrl>+<shift>+9", self.start_api_check),
        )
        hotkeys = []

        for hotkey_text, action in hotkey_actions:
            try:
                hotkeys.append(
                    keyboard.HotKey(
                        keyboard.HotKey.parse(hotkey_text),
                        action,
                    )
                )
            except ValueError:
                pass

        return hotkeys

    def run(self) -> None:
        self.listener.start()
        self.mouse_listener.start()
        self.root.mainloop()

    def on_key_press(self, key) -> None:
        self.update_hotkeys(key, pressed=True)

    def on_key_release(self, key) -> None:
        self.update_hotkeys(key, pressed=False)

    def on_mouse_click(self, x, y, button, pressed) -> None:
        if pressed and self.modal is not None:
            self.root.after(0, self.hide_modal)

    def update_hotkeys(self, key, pressed: bool) -> None:
        try:
            canonical_key = self.listener.canonical(key)
        except AttributeError:
            canonical_key = key

        for hotkey in self.hotkeys:
            if pressed:
                hotkey.press(canonical_key)
            else:
                hotkey.release(canonical_key)

    def start_capture(self) -> None:
        if self.busy:
            return

        now = time.monotonic()
        if now - self.last_capture_at < COOLDOWN_SECONDS:
            self.write_status("Atalho ignorado: aguardando cooldown.")
            return

        self.last_capture_at = now
        self.busy = True
        self.clear_last_error()
        self.write_status("Capturando tela...")
        threading.Thread(target=self.capture_and_answer, daemon=True).start()

    def start_api_check(self) -> None:
        if self.busy:
            return

        self.busy = True
        self.clear_last_error()
        self.write_status("Verificando comunicacao com a API...")
        threading.Thread(target=self.check_api_connection, daemon=True).start()

    def check_api_connection(self) -> None:
        result = "API FALHOU"

        try:
            api_key = self.load_api_key()
            if not api_key:
                self.log_error("OPENAI_API_KEY nao configurada.")
                result = "API FALHOU\nSEM CHAVE"
                return

            payload = {
                "model": MODEL,
                "messages": [
                    {
                        "role": "user",
                        "content": "Responda somente OK.",
                    }
                ],
            }
            if AI_TEMPERATURE is not None:
                payload["temperature"] = AI_TEMPERATURE
            if AI_MAX_COMPLETION_TOKENS is not None:
                payload["max_completion_tokens"] = min(
                    AI_MAX_COMPLETION_TOKENS,
                    200,
                )
            else:
                payload["max_tokens"] = max(16, min(AI_MAX_TOKENS, 80))

            response = self.post_to_ai(
                api_key=api_key,
                payload=payload,
            )

            if not response.ok:
                self.log_api_error(response)
                result = f"API FALHOU\nHTTP {response.status_code}"
                return

            data = response.json()
            self.record_usage(data.get("usage", {}))
            self.write_status(
                f"Comunicacao com a API funcionando. Modelo={MODEL}; "
                f"HTTP={response.status_code}"
            )
            result = "API OK"
        except requests.RequestException as error:
            self.log_error(f"Falha de comunicacao com a API: {error}")
            result = "API FALHOU\nREDE"
        except (KeyError, TypeError, ValueError) as error:
            self.log_error(f"Resposta invalida da API: {error}")
            result = "API FALHOU\nRESPOSTA"
        finally:
            self.busy = False
            self.root.after(0, lambda: self.show_modal(result))

    def capture_and_answer(self) -> None:
        try:
            try:
                screenshot = pyautogui.screenshot(region=self.get_region())
            except Exception as error:
                self.log_error(f"Falha ao capturar o print: {error}")
                self.root.after(0, lambda: self.show_modal("ERP"))
                return

            self.write_status(f"Screenshot capturado: {screenshot.size[0]}x{screenshot.size[1]}")
            answer = self.ask_ai_with_image(screenshot)
            self.root.after(0, lambda: self.show_modal(answer or "Err."))
        except requests.HTTPError:
            self.write_status("Falha tecnica na API. Veja last_error.txt.")
            self.root.after(0, lambda: self.show_modal("Err."))
        except Exception as error:
            self.log_error(f"Falha no fluxo: {error}")
            self.root.after(0, lambda: self.show_modal("Err."))
        finally:
            self.busy = False

    def get_region(self):
        raw_region = os.getenv("STUDYHOTKEY_REGION", "").strip()
        if not raw_region:
            if CAPTURE_MODE == "full":
                return None
            return self.get_cursor_region()

        try:
            x, y, width, height = [int(part.strip()) for part in raw_region.split(",")]
            return (x, y, width, height)
        except ValueError:
            return self.get_cursor_region()

    def get_cursor_region(self):
        mouse_x, mouse_y = pyautogui.position()
        screen_width, screen_height = pyautogui.size()

        width = min(CURSOR_REGION_WIDTH, screen_width)
        height = min(CURSOR_REGION_HEIGHT, screen_height)
        x = max(0, min(mouse_x - width // 2, screen_width - width))
        y = max(0, min(mouse_y - height // 2, screen_height - height))

        return (x, y, width, height)

    def ask_ai_with_image(self, screenshot) -> str:
        api_key = self.load_api_key()
        if not api_key:
            self.log_error("OPENAI_API_KEY nao configurada.")
            return "Err."

        answer = self.ask_ai_once(
            api_key=api_key,
            screenshot=screenshot,
            detail=IMAGE_DETAIL,
            max_size=MAX_IMAGE_SIZE,
            jpeg_quality=JPEG_QUALITY,
        )

        if answer not in {"Err.", "ERP", "ERQ"} or not FALLBACK_ON_ERR:
            return answer

        self.write_status("IA retornou Err. Tentando novamente com imagem mais nitida...")
        return self.ask_ai_once(
            api_key=api_key,
            screenshot=screenshot,
            detail=FALLBACK_IMAGE_DETAIL,
            max_size=FALLBACK_MAX_IMAGE_SIZE,
            jpeg_quality=FALLBACK_JPEG_QUALITY,
        )

    def ask_ai_once(
        self,
        api_key: str,
        screenshot,
        detail: str,
        max_size: int,
        jpeg_quality: int,
    ) -> str:
        image_url = self.image_to_data_url(screenshot, max_size, jpeg_quality)
        self.write_status(
            f"Enviando para IA. Modelo={MODEL}; detalhe={detail}; "
            f"max_img={max_size}; jpeg={jpeg_quality}; imagem_base64_chars={len(image_url)}"
        )

        payload = {
            "model": MODEL,
            "messages": [
                {"role": "system", "content": AI_PROMPT},
                {
                    "role": "user",
                    "content": [
                        {
                            "type": "text",
                            "text": AI_USER_INSTRUCTION,
                        },
                        {
                            "type": "image_url",
                            "image_url": {
                                "url": image_url,
                                "detail": detail,
                            },
                        },
                    ],
                },
            ],
        }
        if AI_TEMPERATURE is not None:
            payload["temperature"] = AI_TEMPERATURE
        if AI_MAX_COMPLETION_TOKENS is not None:
            payload["max_completion_tokens"] = AI_MAX_COMPLETION_TOKENS
        else:
            payload["max_tokens"] = AI_MAX_TOKENS
        if AI_RESPONSE_FORMAT is not None:
            payload["response_format"] = AI_RESPONSE_FORMAT

        response = self.post_to_ai(api_key=api_key, payload=payload)
        self.write_status(f"Resposta HTTP da IA: {response.status_code}")
        if not response.ok:
            self.log_api_error(response)
        response.raise_for_status()

        data = response.json()
        answer = data["choices"][0]["message"]["content"].strip()
        (APP_DIR / "last_answer_raw.txt").write_text(answer, encoding="utf-8")
        self.record_usage(data.get("usage", {}))
        finish_reason = data["choices"][0].get("finish_reason", "desconhecido")
        if finish_reason == "length":
            token_limit = AI_MAX_COMPLETION_TOKENS or AI_MAX_TOKENS
            self.log_error(
                f"Resposta da IA truncada no limite de {token_limit} tokens."
            )
        self.write_status(f"Resposta da IA: {answer[:200]}")
        return self.clean_answer(answer)

    def post_to_ai(self, api_key: str, payload: dict):
        last_response = None

        for attempt, delay in enumerate((0, *RETRY_DELAYS), start=1):
            if delay:
                self.write_status(f"429 recebido. Tentando novamente em {delay}s...")
                time.sleep(delay)

            response = requests.post(
                API_URL,
                headers={
                    "Authorization": f"Bearer {api_key}",
                    "Content-Type": "application/json",
                },
                json=payload,
                timeout=TIMEOUT_SECONDS,
            )
            last_response = response

            if response.status_code != 429:
                return response

            self.log_error(f"Tentativa {attempt}: API retornou 429. {response.text[:500]}")

        return last_response

    def log_api_error(self, response) -> None:
        details = response.text[:800]
        friendly = f"Erro da API {response.status_code}: {details}"

        if response.status_code == 429:
            friendly = (
                "Erro 429 da API: limite/quota da conta atingido ou chamadas demais em pouco tempo. "
                f"Detalhes: {details}"
            )

        self.log_error(friendly)

    def image_to_data_url(self, image, max_size: int, jpeg_quality: int) -> str:
        image = image.convert("RGB")
        image.thumbnail((max_size, max_size))
        if callable(IMAGE_PREPROCESSOR):
            image = IMAGE_PREPROCESSOR(image)
        image.save(APP_DIR / "last_screenshot.jpg", format="JPEG", quality=jpeg_quality)

        buffer = io.BytesIO()
        image.save(buffer, format="JPEG", quality=jpeg_quality, optimize=True)
        encoded = base64.b64encode(buffer.getvalue()).decode("ascii")
        return f"data:image/jpeg;base64,{encoded}"

    def load_api_key(self) -> str:
        api_key = os.getenv("OPENAI_API_KEY", "").strip()
        if self.is_valid_api_key_value(api_key):
            return api_key

        for env_path in (APP_DIR / ".env", PROJECT_DIR / ".env"):
            api_key = self.load_api_key_from_env_file(env_path)
            if self.is_valid_api_key_value(api_key):
                return api_key

        for key_path in (APP_DIR / "openai_key.txt", PROJECT_DIR / "openai_key.txt"):
            if key_path.exists():
                api_key = key_path.read_text(encoding="utf-8").strip()
                if self.is_valid_api_key_value(api_key):
                    return api_key

        return ""

    def is_valid_api_key_value(self, value: str) -> bool:
        if not value:
            return False
        return value not in {"sua-chave", "sua-chave-aqui", "cole-sua-chave-aqui"}

    def load_api_key_from_env_file(self, path: Path) -> str:
        if not path.exists():
            return ""

        for line in path.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line or line.startswith("#") or "=" not in line:
                continue

            name, value = line.split("=", 1)
            if name.strip() == "OPENAI_API_KEY":
                return value.strip().strip('"').strip("'")

        return ""

    def clean_answer(self, answer: str) -> str:
        answer = re.sub(r"\r\n?", "\n", answer).strip()
        if not answer:
            return "Err."

        error_code = re.match(r"(?i)^\s*(ERP|ERQ)\b", answer)
        if error_code:
            return error_code.group(1).upper()

        if answer.strip().lower().startswith("err"):
            return "Err."

        if callable(ANSWER_POSTPROCESSOR):
            processed_answer = ANSWER_POSTPROCESSOR(answer)
            if processed_answer:
                return processed_answer

        if SHOW_ONLY_FINAL_ANSWER:
            return StudyHotkeyApp.extract_strict_final_answer(answer)

        answer = re.sub(r"(?i)^#+\s*", "", answer)
        answer = re.sub(r"(?i)\*\*(resposta|motivo)\s*:\*\*", r"\1:", answer)

        if re.search(r"(?im)^\s*resposta\s*:", answer):
            return StudyHotkeyApp.extract_final_answer(answer)

        answer = " ".join(answer.split())

        if re.match(r"(?i)^\s*(SINGLE|MULTI|ANSWER)\s*\.?\s*$", answer):
            return "Err."

        prefixed = re.match(r"(?i)^\s*(SINGLE|MULTI|ANSWER)\s*:\s*(.+?)\s*$", answer)
        if prefixed:
            kind = prefixed.group(1).upper()
            value = prefixed.group(2).strip()

            if kind == "ANSWER":
                return value[:320] if value else "Err."

            letters = StudyHotkeyApp.extract_letters(value)
            if not letters:
                return "Err."

            if kind == "SINGLE":
                return letters[0]

            return ", ".join(letters)

        if StudyHotkeyApp.looks_like_letter_answer(answer):
            letters = StudyHotkeyApp.extract_letters(answer)
            if letters:
                return ", ".join(letters)

        return answer[:320]

    @staticmethod
    def extract_strict_final_answer(answer: str) -> str:
        plain_answer = re.sub(r"[*_`#]", "", answer)
        marker_pattern = (
            r"(?im)^\s*(?:-\s*)?"
            r"(?:resposta|resultado)(?:\s+final)?\s*[:\-]\s*(.+?)\s*$"
        )
        matches = re.findall(marker_pattern, plain_answer)
        if matches:
            final_answer = matches[-1].strip()
            return final_answer[:180] if final_answer else "Err."

        compact_answer = plain_answer.strip()
        if "\n" not in compact_answer and len(compact_answer) <= 180:
            if re.match(r"(?i)^\s*(calculo|resolucao|verificacao)\s*:", compact_answer):
                return "Err."
            if StudyHotkeyApp.looks_like_letter_answer(compact_answer):
                letters = StudyHotkeyApp.extract_letters(compact_answer)
                return ", ".join(letters) if letters else "Err."
            if re.fullmatch(r"(?i)verdadeiro|falso", compact_answer):
                return compact_answer.capitalize()
            if re.match(r"^\s*(?:[-+]?\d|[a-zA-Z]\s*=)", compact_answer):
                return compact_answer
            return "Err."

        for line in reversed(plain_answer.splitlines()):
            clean_line = line.strip()
            if not clean_line:
                continue

            if StudyHotkeyApp.looks_like_letter_answer(clean_line):
                letters = StudyHotkeyApp.extract_letters(clean_line)
                return ", ".join(letters) if letters else "Err."

            alternative = re.fullmatch(
                r"(?i)(?:portanto,?\s*)?(?:alternativa|opcao|letra)\s*[:\-]?\s*([A-E])\.?",
                clean_line,
            )
            if alternative:
                return alternative.group(1).upper()

        return "Err."

    @staticmethod
    def extract_final_answer(answer: str) -> str:
        match = re.search(r"(?im)^\s*resposta\s*:\s*(.+?)\s*$", answer)
        if not match:
            return "Err."

        final_answer = match.group(1).strip()
        return final_answer[:180] if final_answer else "Err."

    @staticmethod
    def looks_like_letter_answer(text: str) -> bool:
        letter_text = re.sub(r"(?i)(?<=[A-E])\s+e\s+(?=[A-E]\b)", ", ", text.strip())
        return bool(re.fullmatch(r"[A-E](?:\s*,\s*[A-E])*\.?", letter_text.upper()))

    @staticmethod
    def extract_letters(text: str):
        letter_text = re.sub(r"(?i)(?<=[A-E])\s+e\s+(?=[A-E]\b)", ", ", text)
        letters = re.findall(r"\b[A-E]\b", letter_text.upper())
        unique_letters = []
        for letter in letters:
            if letter not in unique_letters:
                unique_letters.append(letter)
        return unique_letters

    def record_usage(self, usage: dict) -> None:
        input_tokens = int(usage.get("prompt_tokens") or usage.get("input_tokens") or 0)
        output_tokens = int(
            usage.get("completion_tokens") or usage.get("output_tokens") or 0
        )
        total_tokens = int(usage.get("total_tokens") or input_tokens + output_tokens)
        estimated_cost = self.calculate_cost(input_tokens, output_tokens)

        log_path = APP_DIR / "usage_log.csv"
        file_exists = log_path.exists()

        with log_path.open("a", newline="", encoding="utf-8") as file:
            writer = csv.writer(file)
            if not file_exists:
                writer.writerow(
                    [
                        "timestamp",
                        "model",
                        "input_tokens",
                        "output_tokens",
                        "total_tokens",
                        "estimated_usd",
                    ]
                )
            writer.writerow(
                [
                    datetime.now().isoformat(timespec="seconds"),
                    MODEL,
                    input_tokens,
                    output_tokens,
                    total_tokens,
                    f"{estimated_cost:.8f}",
                ]
            )

        self.write_usage_summary()

    def calculate_cost(self, input_tokens: int, output_tokens: int) -> float:
        input_cost = (input_tokens / 1_000_000) * INPUT_COST_PER_1M
        output_cost = (output_tokens / 1_000_000) * OUTPUT_COST_PER_1M
        return input_cost + output_cost

    def write_usage_summary(self) -> None:
        log_path = APP_DIR / "usage_log.csv"
        if not log_path.exists():
            return

        calls = 0
        input_tokens = 0
        output_tokens = 0
        total_tokens = 0
        estimated_cost = 0.0

        with log_path.open("r", newline="", encoding="utf-8") as file:
            for row in csv.DictReader(file):
                calls += 1
                input_tokens += int(row["input_tokens"])
                output_tokens += int(row["output_tokens"])
                total_tokens += int(row["total_tokens"])
                estimated_cost += float(row["estimated_usd"])

        summary = (
            f"chamadas={calls}\n"
            f"input_tokens={input_tokens}\n"
            f"output_tokens={output_tokens}\n"
            f"total_tokens={total_tokens}\n"
            f"estimated_usd={estimated_cost:.8f}\n"
            f"modelo={MODEL}\n"
            f"preco_input_por_1M={INPUT_COST_PER_1M}\n"
            f"preco_output_por_1M={OUTPUT_COST_PER_1M}\n"
        )
        (APP_DIR / "usage_summary.txt").write_text(summary, encoding="utf-8")

    def log_error(self, message: str) -> None:
        print(f"[StudyHotkey] {message}", flush=True)
        (APP_DIR / "last_error.txt").write_text(message, encoding="utf-8")

    def clear_last_error(self) -> None:
        (APP_DIR / "last_error.txt").write_text("", encoding="utf-8")

    def write_status(self, message: str) -> None:
        print(f"[StudyHotkey] {message}", flush=True)
        (APP_DIR / "last_status.txt").write_text(message, encoding="utf-8")

    def show_modal(self, text: str) -> None:
        if self.modal is not None:
            self.modal.destroy()

        x, y = pyautogui.position()
        self.modal = tk.Toplevel(self.root)
        self.modal.overrideredirect(True)
        self.modal.attributes("-topmost", True)
        self.modal.configure(bg="white")
        hide_window_from_taskbar(self.modal)

        label = tk.Label(
            self.modal,
            text=text,
            bg="white",
            fg="black",
            font=("Segoe UI", 8),
            padx=5,
            pady=3,
            justify="left",
            wraplength=260,
        )
        label.pack()

        self.modal.geometry(f"+{x + 12}+{y + 12}")
        self.modal.after(3500, self.hide_modal)

    def hide_modal(self) -> None:
        if self.modal is not None:
            self.modal.destroy()
            self.modal = None
