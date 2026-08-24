# StudyHotkey hidden

Mesma captura, mesmos atalhos e o mesmo modal. Diferencas:

- sem janela de console
- sem icone permanente na barra de tarefas
- o modal da resposta continua aparecendo perto do mouse
- supervisor relanca o app se ele cair, como o `.vbs`
- o app tambem relanca o supervisor se o supervisor cair
- para parar os dois, use `parar-studyhotkey.exe`

O processo **continua visivel no Gerenciador de Tarefas**. Esta versao nao esconde o processo do Windows, nao pede admin e nao trava o Gerenciador de Tarefas.

## Gerar

```powershell
powershell -ExecutionPolicy Bypass -File .\build.ps1
```

Copie a pasta `dist\StudyHotkey` inteira.

## Usar

Abra um destes arquivos:

- `iniciar-direito.exe`
- `iniciar-matematica.exe`
- `iniciar-portugues.exe`
- `iniciar-geografia-historia.exe`

Nao use `StudyHotkey.exe` sem copiar um dos nomes acima: esta versao nao mostra seletor de materia.

Atalhos: `Ctrl+Shift+0` e `Ctrl+Shift+9`. Sem navegador.
