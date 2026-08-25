$ErrorActionPreference = "Stop"
Set-Location $PSScriptRoot

function Find-Python {
    $candidates = @(
        { py -3.14 -c "import sys; print(sys.executable)" 2>$null },
        { py -3.13 -c "import sys; print(sys.executable)" 2>$null },
        { py -c "import sys; print(sys.executable)" 2>$null },
        { python -c "import sys; print(sys.executable)" 2>$null }
    )
    foreach ($candidate in $candidates) {
        try {
            $executable = & $candidate
            if ($LASTEXITCODE -eq 0 -and $executable) {
                return ([string]$executable).Trim()
            }
        } catch {
        }
    }
    throw "Python nao encontrado. Instale Python 64 bits para gerar o .exe."
}

$python = Find-Python
Write-Host "Usando Python: $python"

$distDir = Join-Path $PSScriptRoot "dist\StudyHotkey"
$runtimeBackup = Join-Path ([System.IO.Path]::GetTempPath()) ("StudyHotkey-runtime-" + [guid]::NewGuid())
$runtimeFiles = @(
    "openai_key.txt",
    "usage_log.csv",
    "usage_summary.txt",
    "last_error.txt",
    "last_status.txt",
    "last_answer_raw.txt",
    "last_screenshot.jpg"
)
New-Item -ItemType Directory -Path $runtimeBackup | Out-Null
foreach ($name in $runtimeFiles) {
    $source = Join-Path $distDir $name
    if (Test-Path -LiteralPath $source) {
        Copy-Item -LiteralPath $source -Destination (Join-Path $runtimeBackup $name)
    }
}

Remove-Item Env:PYTHONPATH -ErrorAction SilentlyContinue
& $python -m pip install --user pyinstaller pyautogui pillow requests pynput | Out-Host

& $python -m PyInstaller --noconfirm --clean studyhotkey.spec
if ($LASTEXITCODE -ne 0) {
    throw "PyInstaller falhou."
}

$sourceExe = Join-Path $distDir "StudyHotkey.exe"
if (-not (Test-Path $sourceExe)) {
    throw "EXE nao foi gerado: $sourceExe"
}

foreach ($name in $runtimeFiles) {
    $backup = Join-Path $runtimeBackup $name
    if (Test-Path -LiteralPath $backup) {
        Copy-Item -LiteralPath $backup -Destination (Join-Path $distDir $name)
    }
}
Remove-Item -LiteralPath $runtimeBackup -Recurse -Force

$copies = @(
    "iniciar-direito.exe",
    "iniciar-matematica.exe",
    "iniciar-portugues.exe",
    "iniciar-geografia-historia.exe",
    "StudyHotkey-Guardian.exe",
    "parar-studyhotkey.exe"
)
foreach ($name in $copies) {
    Copy-Item -Force $sourceExe (Join-Path $distDir $name)
}

$keySource = Join-Path $PSScriptRoot "StudyHotkey\openai_key.txt"
$keyDest = Join-Path $distDir "openai_key.txt"
if (Test-Path $keySource) {
    Copy-Item -Force $keySource $keyDest
}

Write-Host ""
Write-Host "Pronto. Copie a pasta inteira:"
Write-Host "  $distDir"
Write-Host "Abra iniciar-matematica.exe (ou outra materia). Nao e preciso instalar Python no destino."
