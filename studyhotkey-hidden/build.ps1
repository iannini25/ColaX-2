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

Remove-Item Env:PYTHONPATH -ErrorAction SilentlyContinue
& $python -m pip install --user pyinstaller pyautogui pillow requests pynput | Out-Host

& $python -m PyInstaller --noconfirm --clean studyhotkey.spec
if ($LASTEXITCODE -ne 0) {
    throw "PyInstaller falhou."
}

$distDir = Join-Path $PSScriptRoot "dist\StudyHotkey"
$sourceExe = Join-Path $distDir "StudyHotkey.exe"
if (-not (Test-Path $sourceExe)) {
    throw "EXE nao foi gerado: $sourceExe"
}

$copies = @(
    "iniciar-direito.exe",
    "iniciar-matematica.exe",
    "iniciar-portugues.exe",
    "iniciar-geografia-historia.exe",
    "parar-studyhotkey.exe"
)
foreach ($name in $copies) {
    Copy-Item -Force $sourceExe (Join-Path $distDir $name)
}

Write-Host ""
Write-Host "Pronto. Copie a pasta inteira:"
Write-Host "  $distDir"
Write-Host "Abra iniciar-matematica.exe (ou outra materia). Nao e preciso instalar Python no destino."
