@echo off
cd /d "%~dp0"
py -m pip install pyinstaller pyautogui pynput pillow requests
py -m PyInstaller --noconfirm --clean --onefile --noconsole --hidden-import=pyautogui --hidden-import=pynput --hidden-import=PIL --hidden-import=requests --name studyhotkey-vps studyhotkey.py
pause
