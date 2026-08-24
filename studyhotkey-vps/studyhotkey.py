import base64
import ctypes
import io
import sys
import threading
import tkinter as tk

import pyautogui
import requests
from PIL import ImageGrab
from pynput import keyboard

API_URL = "http://76.13.229.195:5000/answer"


def hide_from_taskbar(window) -> None:
    if sys.platform != "win32":
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
    except (tk.TclError, OSError):
        pass


class StudyHotkeyApp:
    def __init__(self) -> None:
        self.root = tk.Tk()
        self.root.withdraw()
        self.root.title("")
        hide_from_taskbar(self.root)

        self.modal = None
        self.busy = False
        self.hotkeys = (
            keyboard.HotKey(keyboard.HotKey.parse("<ctrl>+<shift>+0"), self.start_capture),
            keyboard.HotKey(keyboard.HotKey.parse("<ctrl>+<shift>+9"), self.request_exit),
        )
        self.listener = keyboard.Listener(
            on_press=self.on_key_press,
            on_release=self.on_key_release,
        )

    def run(self) -> None:
        self.listener.start()
        self.root.mainloop()

    def on_key_press(self, key) -> None:
        try:
            canonical = self.listener.canonical(key)
        except AttributeError:
            canonical = key
        for hotkey in self.hotkeys:
            hotkey.press(canonical)

    def on_key_release(self, key) -> None:
        try:
            canonical = self.listener.canonical(key)
        except AttributeError:
            canonical = key
        for hotkey in self.hotkeys:
            hotkey.release(canonical)

    def request_exit(self) -> None:
        self.root.after(0, self.root.quit)

    def start_capture(self) -> None:
        if self.busy:
            return
        self.busy = True
        threading.Thread(target=self.capture_and_answer, daemon=True).start()

    def capture_and_answer(self) -> None:
        try:
            screenshot = ImageGrab.grab(all_screens=True)
            buffer = io.BytesIO()
            screenshot.convert("RGB").save(buffer, format="JPEG", quality=95)
            payload = {"image": base64.b64encode(buffer.getvalue()).decode("ascii")}
            response = requests.post(API_URL, json=payload, timeout=None)
            response.raise_for_status()
            answer = str(response.json().get("answer", "")).strip() or "Err."
            self.root.after(0, lambda: self.show_modal(answer))
        except Exception:
            self.root.after(0, lambda: self.show_modal("Err."))
        finally:
            self.busy = False

    def show_modal(self, text: str) -> None:
        if self.modal is not None:
            self.modal.destroy()

        self.modal = tk.Toplevel(self.root)
        self.modal.overrideredirect(True)
        self.modal.attributes("-topmost", True)
        self.modal.configure(bg="white")
        hide_from_taskbar(self.modal)

        label = tk.Label(
            self.modal,
            text=text,
            bg="white",
            fg="black",
            font=("Segoe UI", 8),
            padx=5,
            pady=3,
            justify="left",
        )
        label.pack()

        self.modal.update_idletasks()
        screen_width = self.root.winfo_screenwidth()
        x = screen_width - self.modal.winfo_reqwidth() - 20
        self.modal.geometry(f"+{x}+20")
        self.modal.after(3500, self.hide_modal)

    def hide_modal(self) -> None:
        if self.modal is not None:
            self.modal.destroy()
            self.modal = None


if __name__ == "__main__":
    StudyHotkeyApp().run()
