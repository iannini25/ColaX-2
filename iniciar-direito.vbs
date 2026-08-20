Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")

appDir = fso.GetParentFolderName(WScript.ScriptFullName)
launcherPath = fso.BuildPath(appDir, "iniciar-studyhotkey.vbs")

If Not fso.FileExists(launcherPath) Then
    MsgBox "Inicializador principal nao encontrado:" & vbCrLf & launcherPath, vbCritical, "StudyHotkey - Direito"
    WScript.Quit 1
End If

shell.Run "wscript.exe """ & launcherPath & """ ""main_direito.py""", 0, False
