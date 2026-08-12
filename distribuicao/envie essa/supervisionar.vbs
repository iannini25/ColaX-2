Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
exePath = fso.BuildPath(appDir, "pythonw.exe")
stopPath = fso.BuildPath(appDir, "StudyHotkey.stop")
startupErrorPath = fso.BuildPath(appDir, "startup_error.txt")

If Not fso.FileExists(exePath) Then
    WScript.Quit 1
End If

If fso.FileExists(stopPath) Then
    fso.DeleteFile stopPath, True
End If

crashCount = 0
Do
    startedAt = Timer
    exitCode = shell.Run("""" & exePath & """", 0, True)

    If fso.FileExists(stopPath) Then
        fso.DeleteFile stopPath, True
        WScript.Quit 0
    End If

    elapsed = Timer - startedAt
    If elapsed < 0 Then elapsed = elapsed + 86400
    If elapsed < 3 Then
        crashCount = crashCount + 1
    Else
        crashCount = 0
    End If

    If crashCount >= 3 Then
        Set errorFile = fso.CreateTextFile(startupErrorPath, True)
        errorFile.WriteLine "O executavel encerrou repetidamente durante a inicializacao. Ultimo codigo: " & exitCode
        errorFile.WriteLine "Extraia a pasta completa do ZIP e verifique o Historico de protecao do Windows Defender."
        errorFile.Close
        MsgBox "O StudyHotkey nao conseguiu iniciar. Consulte startup_error.txt.", vbCritical, "StudyHotkey"
        WScript.Quit exitCode
    End If

    WScript.Sleep 1000
Loop
