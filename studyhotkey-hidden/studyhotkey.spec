# -*- mode: python ; coding: utf-8 -*-
import sys
from pathlib import Path

from PyInstaller.utils.hooks import collect_data_files, collect_submodules

ROOT = Path(SPECPATH)
sys.path.insert(0, str(ROOT / "StudyHotkey"))

hiddenimports = [
    "studyhotkey",
    "main_direito",
    "main_matematica",
    "main_portugues",
    "main_geografia_historia",
    "pynput.keyboard._win32",
    "pynput.mouse._win32",
    "pynput._util.win32",
    "pyautogui._pyautogui_win",
    "pyscreeze",
    "mouseinfo",
    "pygetwindow",
    "pygetwindow._pygetwindow_win",
    "PIL._tkinter_finder",
    "certifi",
]
hiddenimports += collect_submodules("pynput")
hiddenimports += collect_submodules("PIL")

datas = collect_data_files("certifi")

a = Analysis(
    ["launcher.py"],
    pathex=[str(ROOT / "StudyHotkey")],
    binaries=[],
    datas=datas,
    hiddenimports=hiddenimports,
    hookspath=[],
    hooksconfig={},
    runtime_hooks=[],
    excludes=[],
    noarchive=False,
)

pyz = PYZ(a.pure)

exe = EXE(
    pyz,
    a.scripts,
    [],
    exclude_binaries=True,
    name="StudyHotkey",
    debug=False,
    bootloader_ignore_signals=False,
    strip=False,
    upx=False,
    console=False,
    disable_windowed_traceback=False,
    argv_emulation=False,
    target_arch=None,
    codesign_identity=None,
    entitlements_file=None,
)

coll = COLLECT(
    exe,
    a.binaries,
    a.datas,
    strip=False,
    upx=False,
    upx_exclude=[],
    name="StudyHotkey",
)
