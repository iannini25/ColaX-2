import importlib
import os
import subprocess
import sys
import time
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

CREATE_NO_WINDOW = 0x08000000
STILL_ACTIVE = 259


def runtime_dir() -> Path:
    if getattr(sys, "frozen", False):
        return Path(sys.executable).resolve().parent
    return Path(__file__).resolve().parent


def stop_path() -> Path:
    return runtime_dir() / "StudyHotkey.stop"


def supervisor_pid_path() -> Path:
    return runtime_dir() / "supervisor.pid"


def worker_pid_path() -> Path:
    return runtime_dir() / "worker.pid"


def executable_stem() -> str:
    if getattr(sys, "frozen", False):
        return Path(sys.executable).stem.lower()
    return Path(sys.argv[0]).stem.lower()


def detect_subject() -> str:
    args = [
        part
        for part in sys.argv[1:]
        if not part.startswith("-") and part != "--worker"
    ]
    if args:
        subject = args[0].strip().lower()
        if subject in SUBJECT_MODULES:
            return subject
        raise SystemExit(f"Materia desconhecida: {subject}")

    mapped = SUBJECT_BY_EXECUTABLE.get(executable_stem())
    if mapped:
        return mapped

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


def pid_is_running(pid: int) -> bool:
    if pid <= 0:
        return False
    if sys.platform != "win32":
        try:
            os.kill(pid, 0)
        except OSError:
            return False
        return True

    import ctypes

    kernel32 = ctypes.windll.kernel32
    handle = kernel32.OpenProcess(0x1000, False, int(pid))
    if not handle:
        return False
    try:
        code = ctypes.c_ulong()
        if not kernel32.GetExitCodeProcess(handle, ctypes.byref(code)):
            return False
        return code.value == STILL_ACTIVE
    finally:
        kernel32.CloseHandle(handle)


def read_pid(path: Path) -> int:
    try:
        return int(path.read_text(encoding="utf-8").strip())
    except (OSError, ValueError):
        return 0


def write_pid(path: Path, pid: int) -> None:
    path.write_text(str(pid), encoding="utf-8")


def terminate_pid(pid: int) -> None:
    if not pid_is_running(pid):
        return
    if sys.platform == "win32":
        subprocess.run(
            ["taskkill", "/PID", str(pid), "/F"],
            check=False,
            creationflags=CREATE_NO_WINDOW,
        )
        return
    try:
        os.kill(pid, 15)
    except OSError:
        pass


def worker_command(subject: str):
    if getattr(sys, "frozen", False):
        return [sys.executable, "--worker", subject]
    return [sys.executable, str(Path(__file__).resolve()), "--worker", subject]


def run_app(subject: str) -> None:
    write_pid(worker_pid_path(), os.getpid())
    importlib.import_module(SUBJECT_MODULES[subject])
    import studyhotkey

    studyhotkey.StudyHotkeyApp().run()


def run_supervisor(subject: str) -> None:
    write_pid(supervisor_pid_path(), os.getpid())
    stop = stop_path()
    if stop.exists():
        stop.unlink()

    creationflags = CREATE_NO_WINDOW if sys.platform == "win32" else 0
    while True:
        if stop.exists():
            stop.unlink(missing_ok=True)
            return

        worker = subprocess.Popen(
            worker_command(subject),
            cwd=str(runtime_dir()),
            creationflags=creationflags,
        )
        write_pid(worker_pid_path(), worker.pid)
        worker.wait()

        if stop.exists():
            stop.unlink(missing_ok=True)
            return
        time.sleep(1)


def request_stop() -> None:
    stop = stop_path()
    stop.write_text("STOP", encoding="utf-8")
    terminate_pid(read_pid(worker_pid_path()))
    terminate_pid(read_pid(supervisor_pid_path()))
    time.sleep(0.4)
    if stop.exists():
        stop.unlink(missing_ok=True)


def main() -> None:
    os.chdir(runtime_dir())
    stem = executable_stem()
    if stem.startswith("parar") or "--stop" in sys.argv:
        request_stop()
        return
    subject = detect_subject()
    if "--worker" in sys.argv:
        run_app(subject)
        return
    run_supervisor(subject)


if __name__ == "__main__":
    main()
