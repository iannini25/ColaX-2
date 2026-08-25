import importlib
import os
import subprocess
import sys
import threading
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
STARTF_USESHOWWINDOW = 0x00000001
SW_HIDE = 0


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


def guardian_pid_path() -> Path:
    return runtime_dir() / "guardian.pid"


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
    raise SystemExit(
        "Use iniciar-direito.exe, iniciar-matematica.exe, "
        "iniciar-portugues.exe ou iniciar-geografia-historia.exe."
    )


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


def hidden_popen(command, cwd: str) -> subprocess.Popen:
    kwargs = {
        "cwd": cwd,
        "stdin": subprocess.DEVNULL,
        "stdout": subprocess.DEVNULL,
        "stderr": subprocess.DEVNULL,
    }
    if sys.platform == "win32":
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = SW_HIDE
        kwargs["startupinfo"] = startupinfo
        kwargs["creationflags"] = CREATE_NO_WINDOW
    return subprocess.Popen(command, **kwargs)


def worker_command(subject: str):
    if getattr(sys, "frozen", False):
        return [sys.executable, "--worker", subject]
    return [sys.executable, str(Path(__file__).resolve()), "--worker", subject]


def subject_executable(subject: str) -> Path:
    return runtime_dir() / f"iniciar-{subject}.exe"


def supervisor_command(subject: str):
    if getattr(sys, "frozen", False):
        executable = subject_executable(subject)
        return [str(executable if executable.exists() else sys.executable), subject]
    return [sys.executable, str(Path(__file__).resolve()), subject]


def guardian_command(subject: str):
    if getattr(sys, "frozen", False):
        executable = runtime_dir() / "StudyHotkey-Guardian.exe"
        return [str(executable if executable.exists() else sys.executable), "--guardian", subject]
    return [
        sys.executable,
        str(Path(__file__).resolve()),
        "--guardian",
        subject,
    ]


def stop_requested() -> bool:
    return stop_path().exists()


def run_app(subject: str) -> None:
    write_pid(worker_pid_path(), os.getpid())
    importlib.import_module(SUBJECT_MODULES[subject])
    import studyhotkey

    studyhotkey.HIDE_FROM_TASKBAR = True
    threading.Thread(
        target=watch_supervisor,
        args=(subject,),
        daemon=True,
    ).start()
    studyhotkey.StudyHotkeyApp().run()


def watch_supervisor(subject: str) -> None:
    while not stop_requested():
        supervisor_pid = read_pid(supervisor_pid_path())
        if not pid_is_running(supervisor_pid):
            process = hidden_popen(supervisor_command(subject), str(runtime_dir()))
            write_pid(supervisor_pid_path(), process.pid)
        time.sleep(1)


def watch_guardian(subject: str) -> None:
    while not stop_requested():
        guardian_pid = read_pid(guardian_pid_path())
        if not pid_is_running(guardian_pid):
            process = hidden_popen(guardian_command(subject), str(runtime_dir()))
            write_pid(guardian_pid_path(), process.pid)
        time.sleep(1)


def run_guardian(subject: str) -> None:
    existing = read_pid(guardian_pid_path())
    if existing and existing != os.getpid() and pid_is_running(existing):
        return

    write_pid(guardian_pid_path(), os.getpid())
    while not stop_requested():
        supervisor_pid = read_pid(supervisor_pid_path())
        if not pid_is_running(supervisor_pid):
            process = hidden_popen(supervisor_command(subject), str(runtime_dir()))
            write_pid(supervisor_pid_path(), process.pid)
        time.sleep(1)


def run_supervisor(subject: str) -> None:
    existing = read_pid(supervisor_pid_path())
    if existing and existing != os.getpid() and pid_is_running(existing):
        return

    write_pid(supervisor_pid_path(), os.getpid())
    stop = stop_path()
    if stop.exists():
        stop.unlink()

    threading.Thread(
        target=watch_guardian,
        args=(subject,),
        daemon=True,
    ).start()

    while True:
        if stop_requested():
            stop.unlink(missing_ok=True)
            return

        worker_pid = read_pid(worker_pid_path())
        if pid_is_running(worker_pid):
            while pid_is_running(worker_pid) and not stop_requested():
                time.sleep(0.5)
            if stop_requested():
                stop.unlink(missing_ok=True)
                return
            time.sleep(1)
            continue

        worker = hidden_popen(worker_command(subject), str(runtime_dir()))
        write_pid(worker_pid_path(), worker.pid)
        worker.wait()

        if stop_requested():
            stop.unlink(missing_ok=True)
            return
        time.sleep(1)


def request_stop() -> None:
    stop = stop_path()
    stop.write_text("STOP", encoding="utf-8")
    terminate_pid(read_pid(guardian_pid_path()))
    terminate_pid(read_pid(worker_pid_path()))
    terminate_pid(read_pid(supervisor_pid_path()))
    time.sleep(1.2)
    if stop.exists():
        stop.unlink(missing_ok=True)


def main() -> None:
    os.chdir(runtime_dir())
    stem = executable_stem()
    if stem.startswith("parar") or "--stop" in sys.argv:
        request_stop()
        return
    subject = detect_subject()
    if "--guardian" in sys.argv:
        run_guardian(subject)
        return
    if "--worker" in sys.argv:
        run_app(subject)
        return
    run_supervisor(subject)


if __name__ == "__main__":
    main()
