# colaX

Quatro versoes do StudyHotkey no mesmo repositorio. Use so uma por vez.

## Pastas

- `studyhotkey-original` — versao atual com `.vbs` + Python. Precisa de Python 3.14 no PC. Nao precisa de `pip`.
- `studyhotkey-exe` — mesma coisa empacotada em `.exe`. Sem Python no destino, sem watchdog.
- `studyhotkey-exe-watchdog` — `.exe` com supervisor: se o app cair, sobe de novo em cerca de 1 segundo.
- `studyhotkey-hidden` — `.exe` com supervisor, sem icone na barra de tarefas e sem janela de console. O Gerenciador de Tarefas ainda mostra o processo. Para encerrar, use `parar-studyhotkey.exe`.
- `archives` — arquivos antigos que nao fazem parte do fluxo atual.

## Como gerar os .exe

Em cada pasta `studyhotkey-exe`, `studyhotkey-exe-watchdog` e `studyhotkey-hidden`:

```powershell
powershell -ExecutionPolicy Bypass -File .\build.ps1
```

Depois copie a pasta `dist\StudyHotkey` inteira. Os atalhos ficam la:

- `iniciar-direito.exe`
- `iniciar-matematica.exe`
- `iniciar-portugues.exe`
- `iniciar-geografia-historia.exe`
- `parar-studyhotkey.exe`

Atalhos continuam os mesmos: `Ctrl+Shift+0` captura, `Ctrl+Shift+9` testa a API. Sem navegador.
