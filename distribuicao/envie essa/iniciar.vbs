Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")
appDir = fso.GetParentFolderName(WScript.ScriptFullName)
supervisorPath = fso.BuildPath(appDir, "supervisionar.vbs")
exePath = fso.BuildPath(appDir, "pythonw.exe")
If Not fso.FileExists(supervisorPath) Then
    MsgBox "supervisionar.vbs nao encontrado.", vbCritical, "StudyHotkey"
    WScript.Quit 1
End If
If Not fso.FileExists(exePath) Then
    MsgBox "O executavel pythonw.exe nao foi encontrado. Extraia novamente a pasta completa do ZIP.", vbCritical, "StudyHotkey"
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

launchResult = shell.Run("wscript.exe """ & supervisorPath & """", 0, False)
If launchResult <> 0 Then
    MsgBox "O Windows nao conseguiu iniciar o supervisor. Verifique se os arquivos foram bloqueados pelo Windows ou antivirus.", vbCritical, "StudyHotkey"
    WScript.Quit launchResult
End If
WScript.Sleep 2500
Set supervisors = processService.ExecQuery( _
    "SELECT CommandLine FROM Win32_Process WHERE Name='wscript.exe' OR Name='cscript.exe'" _
)
supervisorFound = False
For Each process In supervisors
    If Not IsNull(process.CommandLine) Then
        If InStr(1, process.CommandLine, supervisorPath, vbTextCompare) > 0 Then
            supervisorFound = True
        End If
    End If
Next
If Not supervisorFound Then
    MsgBox "O aplicativo encerrou durante a inicializacao. Veja startup_error.txt e last_error.txt nesta pasta. Extraia o ZIP antes de executar e confira o bloqueio do antivirus.", vbCritical, "StudyHotkey"
    WScript.Quit 1
End If
