Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
mainPath = fso.BuildPath(appDir, "main.py")
studyHotkeyDir = fso.BuildPath(appDir, "StudyHotkey")
supervisorPath = fso.BuildPath(appDir, "supervisionar-studyhotkey.vbs")
stopPath = fso.BuildPath(studyHotkeyDir, "StudyHotkey.stop")

If Not fso.FileExists(supervisorPath) Then
    MsgBox "Supervisor nao encontrado:" & vbCrLf & supervisorPath, vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

Set stopFile = fso.CreateTextFile(stopPath, True)
stopFile.WriteLine "STOP"
stopFile.Close

Set processService = GetObject("winmgmts:\\.\root\cimv2")
Set pythonProcesses = processService.ExecQuery( _
    "SELECT ProcessId, CommandLine FROM Win32_Process " & _
    "WHERE Name='python.exe' OR Name='pythonw.exe'" _
)

For Each process In pythonProcesses
    If Not IsNull(process.CommandLine) Then
        If InStr(1, process.CommandLine, mainPath, vbTextCompare) > 0 Then
            process.Terminate
        End If
    End If
Next

supervisorRunning = True
For attempt = 1 To 20
    supervisorRunning = False
    Set supervisors = processService.ExecQuery( _
        "SELECT ProcessId, CommandLine FROM Win32_Process " & _
        "WHERE Name='wscript.exe' OR Name='cscript.exe'" _
    )

    For Each process In supervisors
        If Not IsNull(process.CommandLine) Then
            If InStr(1, process.CommandLine, supervisorPath, vbTextCompare) > 0 Then
                supervisorRunning = True
            End If
        End If
    Next

    If Not supervisorRunning Then Exit For
    WScript.Sleep 250
Next

If Not supervisorRunning Then
    If LCase(fso.GetFileName(WScript.FullName)) = "cscript.exe" Then
        WScript.Echo "StudyHotkey encerrado."
    Else
        MsgBox "StudyHotkey encerrado.", vbInformation, "StudyHotkey"
    End If
    WScript.Quit 0
Else
    If LCase(fso.GetFileName(WScript.FullName)) = "cscript.exe" Then
        WScript.Echo "O supervisor nao respondeu ao comando de parada."
    Else
        MsgBox "O supervisor nao respondeu ao comando de parada.", vbExclamation, "StudyHotkey"
    End If
    WScript.Quit 1
End If
