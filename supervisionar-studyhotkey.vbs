Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
mainPath = fso.BuildPath(appDir, "main.py")
studyHotkeyDir = fso.BuildPath(appDir, "StudyHotkey")
stopPath = fso.BuildPath(studyHotkeyDir, "StudyHotkey.stop")
statusPath = fso.BuildPath(studyHotkeyDir, "supervisor_status.txt")

If WScript.Arguments.Count = 0 Then
    WScript.Quit 1
End If

pythonPath = WScript.Arguments(0)

If Not fso.FileExists(pythonPath) Or Not fso.FileExists(mainPath) Then
    WScript.Quit 1
End If

If fso.FileExists(stopPath) Then
    fso.DeleteFile stopPath, True
End If

Do
    Set statusFile = fso.CreateTextFile(statusPath, True)
    statusFile.WriteLine Now & " Aplicativo iniciado pelo supervisor VBS."
    statusFile.Close

    runCommand = """" & pythonPath & """ """ & mainPath & """"
    exitCode = shell.Run(runCommand, 0, True)

    If fso.FileExists(stopPath) Then
        fso.DeleteFile stopPath, True
        Set statusFile = fso.CreateTextFile(statusPath, True)
        statusFile.WriteLine Now & " Supervisor encerrado pelo arquivo de parada."
        statusFile.Close
        WScript.Quit 0
    End If

    Set statusFile = fso.CreateTextFile(statusPath, True)
    statusFile.WriteLine Now & " Aplicativo finalizado; reiniciando em 1 segundo."
    statusFile.Close
    WScript.Sleep 1000
Loop
