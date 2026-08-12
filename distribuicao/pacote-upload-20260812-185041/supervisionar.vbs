Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
exePath = fso.BuildPath(appDir, "pythonw.exe")
stopPath = fso.BuildPath(appDir, "StudyHotkey.stop")

If Not fso.FileExists(exePath) Then
    WScript.Quit 1
End If

If fso.FileExists(stopPath) Then
    fso.DeleteFile stopPath, True
End If

Do
    exitCode = shell.Run("""" & exePath & """", 0, True)

    If fso.FileExists(stopPath) Then
        fso.DeleteFile stopPath, True
        WScript.Quit 0
    End If

    WScript.Sleep 1000
Loop
