$ErrorActionPreference = "Stop"

$projectDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$sourceDir = Join-Path $projectDir "StudyHotkey"
$outputDir = Join-Path $projectDir "distribuicao"

if (-not (Test-Path -LiteralPath (Join-Path $sourceDir "senha.json"))) {
    throw "StudyHotkey\senha.json nao encontrado."
}

if (-not (Test-Path -LiteralPath (Join-Path $sourceDir "api_key.enc"))) {
    throw "StudyHotkey\api_key.enc nao encontrado."
}

py -m pip install --disable-pip-version-check -r (Join-Path $sourceDir "requirements.txt")
if ($LASTEXITCODE -ne 0) { throw "Falha ao instalar as dependencias." }

py -m pip install --disable-pip-version-check nuitka ordered-set zstandard
if ($LASTEXITCODE -ne 0) { throw "Falha ao instalar o empacotador." }

py -m nuitka `
    --standalone `
    --assume-yes-for-downloads `
    --windows-console-mode=disable `
    --enable-plugin=tk-inter `
    --output-filename=pythonw.exe `
    --output-dir=$outputDir `
    (Join-Path $sourceDir "main.py")

if ($LASTEXITCODE -ne 0) { throw "Falha ao compilar o StudyHotkey." }

$compiledDir = Join-Path $outputDir "main.dist"
Copy-Item -LiteralPath (Join-Path $sourceDir "senha.json") -Destination $compiledDir -Force
Copy-Item -LiteralPath (Join-Path $sourceDir "api_key.enc") -Destination $compiledDir -Force

# Nunca distribua arquivos criados em uma execucao local. Eles ficam vinculados
# ao computador/usuario que ativou o aplicativo e impedem a abertura em outro PC.
$runtimeFiles = @(
    "ativacao.json",
    "api_key.local",
    "StudyHotkey.lock",
    "StudyHotkey.stop",
    "last_answer_raw.txt",
    "last_error.txt",
    "last_screenshot.jpg",
    "last_status.txt",
    "supervisor_status.txt",
    "usage_log.csv",
    "usage_summary.txt"
)
foreach ($runtimeFile in $runtimeFiles) {
    Remove-Item -LiteralPath (Join-Path $compiledDir $runtimeFile) -Force -ErrorAction SilentlyContinue
}

$launcher = @'
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
Set supervisors = processService.ExecQuery("SELECT CommandLine FROM Win32_Process WHERE Name='wscript.exe' OR Name='cscript.exe'")
For Each process In supervisors
    If Not IsNull(process.CommandLine) Then
        If InStr(1, process.CommandLine, supervisorPath, vbTextCompare) > 0 Then WScript.Quit 0
    End If
Next
launchResult = shell.Run("wscript.exe """ & supervisorPath & """", 0, False)
If launchResult <> 0 Then
    MsgBox "O Windows nao conseguiu iniciar o supervisor. Verifique se os arquivos foram bloqueados pelo Windows ou antivirus.", vbCritical, "StudyHotkey"
    WScript.Quit launchResult
End If
WScript.Sleep 2500
Set supervisors = processService.ExecQuery("SELECT CommandLine FROM Win32_Process WHERE Name='wscript.exe' OR Name='cscript.exe'")
supervisorFound = False
For Each process In supervisors
    If Not IsNull(process.CommandLine) Then
        If InStr(1, process.CommandLine, supervisorPath, vbTextCompare) > 0 Then supervisorFound = True
    End If
Next
If Not supervisorFound Then
    MsgBox "O aplicativo encerrou durante a inicializacao. Veja startup_error.txt e last_error.txt nesta pasta. Extraia o ZIP antes de executar e confira o bloqueio do antivirus.", vbCritical, "StudyHotkey"
    WScript.Quit 1
End If
'@
Set-Content -LiteralPath (Join-Path $compiledDir "iniciar.vbs") -Value $launcher -Encoding ASCII

$supervisor = @'
Set shell = CreateObject("WScript.Shell")
Set fso = CreateObject("Scripting.FileSystemObject")
appDir = fso.GetParentFolderName(WScript.ScriptFullName)
exePath = fso.BuildPath(appDir, "pythonw.exe")
stopPath = fso.BuildPath(appDir, "StudyHotkey.stop")
startupErrorPath = fso.BuildPath(appDir, "startup_error.txt")
If Not fso.FileExists(exePath) Then WScript.Quit 1
If fso.FileExists(stopPath) Then fso.DeleteFile stopPath, True
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
'@
Set-Content -LiteralPath (Join-Path $compiledDir "supervisionar.vbs") -Value $supervisor -Encoding ASCII

$stopper = @'
Set fso = CreateObject("Scripting.FileSystemObject")
appDir = fso.GetParentFolderName(WScript.ScriptFullName)
exePath = fso.BuildPath(appDir, "pythonw.exe")
stopPath = fso.BuildPath(appDir, "StudyHotkey.stop")
stopped = False
Set stopFile = fso.CreateTextFile(stopPath, True)
stopFile.WriteLine "STOP"
stopFile.Close
Set processService = GetObject("winmgmts:\\.\root\cimv2")
Set processes = processService.ExecQuery("SELECT ProcessId, ExecutablePath FROM Win32_Process WHERE Name='pythonw.exe'")
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
'@
Set-Content -LiteralPath (Join-Path $compiledDir "parar.vbs") -Value $stopper -Encoding ASCII

$instructions = @'
STUDYHOTKEY

1. Abra iniciar.vbs.
2. Na primeira abertura, informe a senha de liberacao.
3. Depois da ativacao, use Ctrl + Shift + 0 para analisar a questao na tela.
4. Use Ctrl + Shift + 9 para verificar se a comunicacao com a API esta funcionando.
5. Para encerrar completamente, abra parar.vbs.

Esta copia fica vinculada ao computador em que for ativada.
O pacote ja inclui Python e todas as dependencias. Nao instale requirements.txt.
Extraia o ZIP inteiro para uma pasta antes de abrir iniciar.vbs.
Se nada abrir, consulte startup_error.txt e last_error.txt e verifique o Historico de
protecao do Windows Defender. O Windows pode bloquear executaveis recebidos da internet.
Se pythonw.exe for encerrado isoladamente, o supervisor o inicia novamente.
'@
Set-Content -LiteralPath (Join-Path $compiledDir "LEIA-ME.txt") -Value $instructions -Encoding UTF8

$finalDir = Join-Path $outputDir "envie essa"
if (Test-Path -LiteralPath $finalDir) {
    $backupDir = Join-Path $outputDir ("envie essa-anterior-" + (Get-Date -Format "yyyyMMdd-HHmmss"))
    Move-Item -LiteralPath $finalDir -Destination $backupDir
}
Move-Item -LiteralPath $compiledDir -Destination $finalDir

# Auditoria final: um pacote de envio nunca pode conter estado de outra maquina.
$forbiddenFiles = @("ativacao.json", "api_key.local", "StudyHotkey.lock", "StudyHotkey.stop")
foreach ($forbiddenFile in $forbiddenFiles) {
    if (Test-Path -LiteralPath (Join-Path $finalDir $forbiddenFile)) {
        throw "Arquivo local proibido na distribuicao: $forbiddenFile"
    }
}

$zipPath = Join-Path $outputDir ("StudyHotkey-envio-limpo-" + (Get-Date -Format "yyyyMMdd-HHmmss") + ".zip")
Compress-Archive -Path (Join-Path $finalDir "*") -DestinationPath $zipPath -CompressionLevel Optimal

Write-Host "Distribuicao criada em: $finalDir"
Write-Host "ZIP pronto para envio: $zipPath"
Write-Host "Envie o ZIP ao comprador; ele deve extrair tudo antes de abrir iniciar.vbs."
