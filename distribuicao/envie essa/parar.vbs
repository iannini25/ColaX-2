Set fso = CreateObject("Scripting.FileSystemObject")

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
exePath = fso.BuildPath(appDir, "pythonw.exe")
stopPath = fso.BuildPath(appDir, "StudyHotkey.stop")
stopped = False

Set stopFile = fso.CreateTextFile(stopPath, True)
stopFile.WriteLine "STOP"
stopFile.Close

Set processService = GetObject("winmgmts:\\.\root\cimv2")
Set processes = processService.ExecQuery( _
    "SELECT ProcessId, ExecutablePath FROM Win32_Process WHERE Name='pythonw.exe'" _
)

For Each process In processes
    If Not IsNull(process.ExecutablePath) Then
        If StrComp(process.ExecutablePath, exePath, vbTextCompare) = 0 Then
            process.Terminate
            stopped = True
        End If
    End If
Next

WScript.Sleep 1200

If stopped Then
    MsgBox "StudyHotkey encerrado.", vbInformation, "StudyHotkey"
Else
    MsgBox "Comando de parada enviado.", vbInformation, "StudyHotkey"
End If
