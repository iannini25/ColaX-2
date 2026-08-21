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

    localAppData = shellObject.ExpandEnvironmentStrings("%LOCALAPPDATA%")
    knownPythonPaths = Array( _
        fileSystemObject.BuildPath(localAppData, "Programs\Python\Python314\python.exe"), _
        fileSystemObject.BuildPath(localAppData, "Programs\Python\Python313\python.exe"), _
        fileSystemObject.BuildPath(localAppData, "Programs\Python\Python312\python.exe") _
    )

    For Each pythonCandidate In knownPythonPaths
        If fileSystemObject.FileExists(pythonCandidate) Then
            FindPythonExecutable = pythonCandidate
            Exit Function
        End If
    Next
End Function

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
studyHotkeyDir = fso.BuildPath(appDir, "StudyHotkey")
requirementsPath = fso.BuildPath(studyHotkeyDir, "requirements.txt")

If Not fso.FileExists(requirementsPath) Then
    MsgBox "Arquivo de dependencias nao encontrado:" & vbCrLf & requirementsPath, vbCritical, "Instalar requisitos"
    WScript.Quit 1
End If

pythonPath = FindPythonExecutable(shell, fso)
If pythonPath = "" Then
    installPython = MsgBox( _
        "Python nao foi encontrado. Deseja instalar automaticamente o Python 3.12?", _
        vbYesNo + vbQuestion, _
        "Instalar requisitos do StudyHotkey" _
    )

    If installPython = vbYes Then
        On Error Resume Next
        Err.Clear
        pythonInstallExitCode = shell.Run( _
            "winget install --id Python.Python.3.12 -e --scope user --accept-package-agreements --accept-source-agreements", _
            1, _
            True _
        )
        wingetError = Err.Number
        On Error GoTo 0

        If wingetError <> 0 Or pythonInstallExitCode <> 0 Then
            MsgBox "Nao foi possivel instalar o Python automaticamente pelo winget.", vbExclamation, "Instalar requisitos"
        End If

        pythonPath = FindPythonExecutable(shell, fso)
    End If

    If pythonPath = "" Then
        MsgBox "Instale o Python para Windows e execute este instalador novamente.", vbCritical, "Instalar requisitos"
        WScript.Quit 1
    End If
End If

installCommand = """" & pythonPath & """ -m pip install --disable-pip-version-check -r """ & requirementsPath & """"
installExitCode = shell.Run(installCommand, 1, True)

If installExitCode <> 0 Then
    MsgBox "Nao foi possivel instalar as dependencias do requirements.txt." & vbCrLf & _
        "Execute manualmente:" & vbCrLf & _
        "py -m pip install -r """ & requirementsPath & """", vbCritical, "Instalar requisitos"
    WScript.Quit installExitCode
End If

verifyCommand = """" & pythonPath & """ -c ""import tkinter, PIL, pyautogui, requests, pynput"""
verifyExitCode = shell.Run(verifyCommand, 0, True)

If verifyExitCode <> 0 Then
    MsgBox "A instalacao terminou, mas a verificacao das dependencias falhou.", vbCritical, "Instalar requisitos"
    WScript.Quit verifyExitCode
End If

MsgBox "Python e dependencias instalados corretamente.", vbInformation, "StudyHotkey pronto"
