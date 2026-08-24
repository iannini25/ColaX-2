# StudyHotkey .exe + watchdog

Igual ao `.exe` simples, com supervisor no estilo do `.vbs`:

- o inicializador sobe o app
- se o app cair ou for encerrado isoladamente, o supervisor espera cerca de 1 segundo e abre de novo
- nao pede administrador

## Gerar

```powershell
powershell -ExecutionPolicy Bypass -File .\build.ps1
```

Copie a pasta `dist\StudyHotkey` inteira.

## Usar

- `iniciar-direito.exe`
- `iniciar-matematica.exe`
- `iniciar-portugues.exe`
- `iniciar-geografia-historia.exe`

Para encerrar de verdade, use somente `parar-studyhotkey.exe`. Se matar so o app no Gerenciador de Tarefas, o supervisor relanca.
