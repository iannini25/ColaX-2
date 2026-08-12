Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

Function FindPythonExecutable(shellObject, fileSystemObject)
    commands = Array("py", "python")
    FindPythonExecutable = ""

    For Each commandName In commands
        Set pythonExec = Nothing
        On Error Resume Next
        Err.Clear
        Set pythonExec = shellObject.Exec(commandName & " -c ""import sys; print(sys.executable)""")
        launchError = Err.Number
        On Error GoTo 0

        If launchError = 0 And Not pythonExec Is Nothing Then
            pythonCandidate = Trim(pythonExec.StdOut.ReadLine())
            Do While pythonExec.Status = 0
                WScript.Sleep 50
            Loop

            If pythonExec.ExitCode = 0 And pythonCandidate <> "" Then
                If fileSystemObject.FileExists(pythonCandidate) Then
                    FindPythonExecutable = pythonCandidate
                    Exit Function
                End If
            End If
        End If
    Next
End Function

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
mainPath = fso.BuildPath(appDir, "main.py")
studyHotkeyDir = fso.BuildPath(appDir, "StudyHotkey")
supervisorPath = fso.BuildPath(appDir, "supervisionar-studyhotkey.vbs")
requirementsPath = fso.BuildPath(studyHotkeyDir, "requirements.txt")

If Not fso.FileExists(mainPath) Then
    MsgBox "Arquivo principal nao encontrado:" & vbCrLf & mainPath, vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

If Not fso.FileExists(requirementsPath) Then
    MsgBox "Arquivo de dependencias nao encontrado:" & vbCrLf & requirementsPath, vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

If Not fso.FileExists(supervisorPath) Then
    MsgBox "Supervisor nao encontrado:" & vbCrLf & supervisorPath, vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

Set processService = GetObject("winmgmts:\\.\root\cimv2")
Set supervisors = processService.ExecQuery( _
    "SELECT ProcessId, CommandLine FROM Win32_Process " & _
    "WHERE Name='wscript.exe' OR Name='cscript.exe'" _
)

For Each process In supervisors
    If Not IsNull(process.CommandLine) Then
        If InStr(1, process.CommandLine, supervisorPath, vbTextCompare) > 0 Then
            WScript.Quit 0
        End If
    End If
Next

pythonPath = FindPythonExecutable(shell, fso)
If pythonPath = "" Then
    MsgBox "Python nao foi encontrado. Instale o Python 3 para Windows e tente novamente.", vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

installCommand = """" & pythonPath & """ -m pip install --disable-pip-version-check -r """ & requirementsPath & """"
installExitCode = shell.Run(installCommand, 0, True)

If installExitCode <> 0 Then
    MsgBox "Nao foi possivel instalar as dependencias do requirements.txt." & vbCrLf & _
        "Execute manualmente:" & vbCrLf & _
        "py -m pip install -r """ & requirementsPath & """", vbCritical, "StudyHotkey"
    WScript.Quit installExitCode
End If

verifyCommand = """" & pythonPath & """ -c ""import tkinter, PIL, pyautogui, requests, pynput"""
verifyExitCode = shell.Run(verifyCommand, 0, True)

If verifyExitCode <> 0 Then
    MsgBox "As dependencias foram instaladas, mas a verificacao final falhou.", vbCritical, "StudyHotkey"
    WScript.Quit verifyExitCode
End If

pythonwPath = fso.BuildPath(fso.GetParentFolderName(pythonPath), "pythonw.exe")

If Not fso.FileExists(pythonwPath) Then
    pythonwPath = pythonPath
End If

startCommand = "wscript.exe """ & supervisorPath & """ """ & pythonwPath & """"
shell.Run startCommand, 0, False
