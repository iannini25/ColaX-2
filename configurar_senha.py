import getpass
import sys
from pathlib import Path


APP_DIR = Path(__file__).resolve().parent / "StudyHotkey"
sys.path.insert(0, str(APP_DIR))

from auth import configure_password, password_is_configured  # noqa: E402


def main() -> int:
    print("Configuracao da senha do StudyHotkey")
    print("A senha nao aparece na tela e sera armazenada somente como hash.")

    if not password_is_configured():
        print("O arquivo-base StudyHotkey\\senha.json esta ausente.")
        return 1

    current_password = getpass.getpass("Senha atual: ")

    new_password = getpass.getpass("Nova senha (minimo de 8 caracteres): ")
    confirmation = getpass.getpass("Confirme a nova senha: ")
    if new_password != confirmation:
        print("As senhas nao coincidem.")
        return 1

    try:
        configure_password(new_password, current_password)
    except (ValueError, PermissionError, FileNotFoundError) as error:
        print(error)
        return 1

    print("Senha alterada e ativacao anterior removida.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
