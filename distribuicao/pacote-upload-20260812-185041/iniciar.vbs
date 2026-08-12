Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")
appDir = fso.GetParentFolderName(WScript.ScriptFullName)
supervisorPath = fso.BuildPath(appDir, "supervisionar.vbs")
If Not fso.FileExists(supervisorPath) Then
    MsgBox "supervisionar.vbs nao encontrado.", vbCritical, "StudyHotkey"
    WScript.Quit 1
End If

Set processService = GetObject("winmgmts:\\.\root\cimv2")
Set supervisors = processService.ExecQuery( _
    "SELECT CommandLine FROM Win32_Process WHERE Name='wscript.exe' OR Name='cscript.exe'" _
)
For Each process In supervisors
    If Not IsNull(process.CommandLine) Then
        If InStr(1, process.CommandLine, supervisorPath, vbTextCompare) > 0 Then
            WScript.Quit 0
        End If
    End If
Next

shell.Run "wscript.exe """ & supervisorPath & """", 0, False
