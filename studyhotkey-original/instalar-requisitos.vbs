Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

Function FindPythonExecutable(shellObject, fileSystemObject)
    commands = Array("py -3.14", "py", "python")
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
        fileSystemObject.BuildPath(localAppData, "Python\pythoncore-3.14-64\python.exe") _
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
vendorPath = fso.BuildPath(studyHotkeyDir, "vendor")
pythonPath = FindPythonExecutable(shell, fso)

If pythonPath = "" Then
    MsgBox "Python nao encontrado." & vbCrLf & _
        "Instale o Python 3.14 de 64 bits. As outras bibliotecas ja acompanham o projeto.", _
        vbCritical, "Verificar StudyHotkey"
    WScript.Quit 1
End If

If Not fso.FolderExists(vendorPath) Then
    MsgBox "A pasta de bibliotecas locais nao foi encontrada:" & vbCrLf & vendorPath, _
        vbCritical, "Verificar StudyHotkey"
    WScript.Quit 1
End If

verifyCommand = """" & pythonPath & """ -c ""import sys; sys.path.insert(0, sys.argv[1]); import tkinter, PIL, pyautogui, requests, pynput"" """ & vendorPath & """"
verifyExitCode = shell.Run(verifyCommand, 0, True)

If verifyExitCode <> 0 Then
    MsgBox "As bibliotecas locais nao sao compativeis com este Python." & vbCrLf & _
        "Use Python 3.14 de 64 bits e copie a pasta completa do projeto.", _
        vbCritical, "Verificar StudyHotkey"
    WScript.Quit verifyExitCode
End If

MsgBox "Tudo pronto. Nenhuma biblioteca foi baixada ou instalada.", _
    vbInformation, "StudyHotkey pronto"
