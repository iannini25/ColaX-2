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
        fileSystemObject.BuildPath(localAppData, "Python\pythoncore-3.14-64\python.exe"), _
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
mainPath = fso.BuildPath(studyHotkeyDir, "main_direito.py")

If WScript.Arguments.Count > 0 Then
    requestedMain = fso.GetFileName(WScript.Arguments(0))
    mainPath = fso.BuildPath(studyHotkeyDir, requestedMain)
End If

supervisorPath = fso.BuildPath(appDir, "supervisionar-studyhotkey.vbs")
apiKeyPath = fso.BuildPath(studyHotkeyDir, "openai_key.txt")
envPath = fso.BuildPath(studyHotkeyDir, ".env")

If Not fso.FileExists(mainPath) Then
    MsgBox "Arquivo principal nao encontrado:" & vbCrLf & mainPath, vbCritical, "StudyHotkey"
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
    MsgBox "Python nao encontrado. Instale o Python 3.14 de 64 bits.", vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

vendorPath = fso.BuildPath(studyHotkeyDir, "vendor")
verifyCommand = """" & pythonPath & """ -c ""import sys; sys.path.insert(0, sys.argv[1]); import tkinter, PIL, pyautogui, requests, pynput"" """ & vendorPath & """"
verifyExitCode = shell.Run(verifyCommand, 0, True)

If verifyExitCode <> 0 Then
    MsgBox "As bibliotecas locais nao puderam ser carregadas." & vbCrLf & _
        "Use Python 3.14 de 64 bits e copie a pasta completa do projeto.", vbCritical, "StudyHotkey"
    WScript.Quit verifyExitCode
End If

environmentApiKey = shell.ExpandEnvironmentStrings("%OPENAI_API_KEY%")
apiKeyConfigured = environmentApiKey <> "" And environmentApiKey <> "%OPENAI_API_KEY%"

If Not apiKeyConfigured Then
    apiKeyConfigured = fso.FileExists(apiKeyPath) Or fso.FileExists(envPath)
End If

If Not apiKeyConfigured Then
    apiKey = Trim(InputBox( _
        "Cole a chave da API da OpenAI. Ela sera salva somente neste computador.", _
        "Configurar API do StudyHotkey" _
    ))

    If apiKey = "" Then
        MsgBox "A chave da API nao foi informada. O aplicativo nao foi iniciado.", vbExclamation, "StudyHotkey"
        WScript.Quit 1
    End If

    Set apiKeyFile = fso.CreateTextFile(apiKeyPath, True)
    apiKeyFile.Write apiKey
    apiKeyFile.Close
End If

pythonwPath = fso.BuildPath(fso.GetParentFolderName(pythonPath), "pythonw.exe")

If Not fso.FileExists(pythonwPath) Then
    pythonwPath = pythonPath
End If

startCommand = "wscript.exe """ & supervisorPath & """ """ & pythonwPath & """ """ & mainPath & """"
shell.Run startCommand, 0, False
