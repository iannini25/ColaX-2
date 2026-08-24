import importlib
import os
import sys
from pathlib import Path


SOURCE_DIR = Path(__file__).resolve().parent / "StudyHotkey"
if SOURCE_DIR.is_dir():
    sys.path.insert(0, str(SOURCE_DIR))

if getattr(sys, "frozen", False):
    meipass = Path(getattr(sys, "_MEIPASS", Path(sys.executable).resolve().parent))
    sys.path.insert(0, str(meipass))


SUBJECT_MODULES = {
    "direito": "main_direito",
    "matematica": "main_matematica",
    "portugues": "main_portugues",
    "geografia-historia": "main_geografia_historia",
}

SUBJECT_BY_EXECUTABLE = {
    "iniciar-direito": "direito",
    "iniciar-matematica": "matematica",
    "iniciar-portugues": "portugues",
    "iniciar-geografia-historia": "geografia-historia",
}


def executable_stem() -> str:
    if getattr(sys, "frozen", False):
        return Path(sys.executable).stem.lower()
    return Path(sys.argv[0]).stem.lower()


def detect_subject() -> str:
    args = [part for part in sys.argv[1:] if not part.startswith("-")]
    if args:
        subject = args[0].strip().lower()
        if subject in SUBJECT_MODULES:
            return subject
        raise SystemExit(f"Materia desconhecida: {subject}")

    mapped = SUBJECT_BY_EXECUTABLE.get(executable_stem())
    if mapped:
        return mapped
    return ask_subject()


def ask_subject() -> str:
    import tkinter as tk
    from tkinter import simpledialog

    root = tk.Tk()
    root.withdraw()
    subject = simpledialog.askstring(
        "StudyHotkey",
        "Materia: direito, matematica, portugues ou geografia-historia",
        parent=root,
    )
    root.destroy()
    subject = (subject or "").strip().lower()
    if subject not in SUBJECT_MODULES:
        raise SystemExit("Nenhuma materia valida foi escolhida.")
    return subject


def run_app(subject: str) -> None:
    pid_path = Path(sys.executable).resolve().parent / "worker.pid" if getattr(sys, "frozen", False) else SOURCE_DIR / "worker.pid"
    pid_path.write_text(str(os.getpid()), encoding="utf-8")
    importlib.import_module(SUBJECT_MODULES[subject])
    import studyhotkey

    studyhotkey.StudyHotkeyApp().run()


def request_stop() -> None:
    import subprocess

    runtime = Path(sys.executable).resolve().parent if getattr(sys, "frozen", False) else SOURCE_DIR
    pid_path = runtime / "worker.pid"
    try:
        pid = int(pid_path.read_text(encoding="utf-8").strip())
    except (OSError, ValueError):
        pid = 0
    if pid:
        subprocess.run(["taskkill", "/PID", str(pid), "/F"], check=False, creationflags=0x08000000)


def main() -> None:
    os.chdir(SOURCE_DIR.parent if SOURCE_DIR.is_dir() else Path.cwd())
    if getattr(sys, "frozen", False):
        os.chdir(Path(sys.executable).resolve().parent)
    stem = executable_stem()
    if stem.startswith("parar") or "--stop" in sys.argv:
        request_stop()
        return
    run_app(detect_subject())


if __name__ == "__main__":
    main()
