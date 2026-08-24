# StudyHotkey .exe

Mesmo app do original, empacotado. No computador de destino nao precisa instalar Python nem `pip`.

Se o processo fechar, ele **nao** reabre sozinho. Para isso use `studyhotkey-exe-watchdog` ou `studyhotkey-hidden`.

## Gerar

```powershell
powershell -ExecutionPolicy Bypass -File .\build.ps1
```

Copie a pasta `dist\StudyHotkey` inteira (`_internal` precisa ir junto).

## Usar

Abra um destes arquivos dentro de `dist\StudyHotkey`:

- `iniciar-direito.exe`
- `iniciar-matematica.exe`
- `iniciar-portugues.exe`
- `iniciar-geografia-historia.exe`

Na primeira execucao o app pede a chave da API e grava `openai_key.txt` na mesma pasta do `.exe`.

Atalhos: `Ctrl+Shift+0` e `Ctrl+Shift+9`. Sem navegador.

Para encerrar: `parar-studyhotkey.exe`.

O Windows pode avisar SmartScreen em `.exe` nao assinado. Isso nao e pedido de administrador.
