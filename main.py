import runpy
from pathlib import Path


APP_PATH = Path(__file__).parent / "StudyHotkey" / "main.py"


if __name__ == "__main__":
    try:
        runpy.run_path(str(APP_PATH), run_name="__main__")
    except SystemExit as error:
        message = str(error)
        if message:
            print(message)
