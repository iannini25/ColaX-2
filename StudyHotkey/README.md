# StudyHotkey - Modos por materia

Modo estudo com OCR na nuvem.

O app local captura a tela em qualquer programa, escuta o atalho e mostra a resposta.
A IA na nuvem le o enunciado ou a expressao, realiza o calculo e identifica a resposta.

Existem entradas separadas por materia. Atualmente estao disponiveis Direito,
Matematica, Portugues e Historia/Geografia. Todas usam o mesmo mecanismo de captura e
os mesmos atalhos, mas cada uma possui seu proprio prompt especializado. Execute
somente uma materia por vez.

## Como usar

1. O computador precisa ter Python 3.14 de 64 bits. As demais bibliotecas ja estao
dentro de `StudyHotkey\vendor` e nao precisam ser instaladas com `pip`.

Opcionalmente, abra `instalar-requisitos.vbs` para verificar o Python e as bibliotecas
locais. Esse arquivo nao baixa nem instala nada.

2. Depois da instalacao, abra o inicializador da materia desejada:

- `iniciar-direito.vbs`
- `iniciar-matematica.vbs`
- `iniciar-portugues.vbs`
- `iniciar-geografia-historia.vbs`

Para trocar de materia, primeiro use `parar-studyhotkey.vbs` e depois abra o outro
inicializador.

Na primeira execucao, se a chave da API ainda nao estiver configurada, o inicializador
pede a chave e a salva localmente em `StudyHotkey\openai_key.txt`. Nao e preciso editar
o codigo. Esse arquivo contem uma credencial de cobranca e nao deve ser publicado.

Como alternativa, configure a chave no Windows:

```powershell
$env:OPENAI_API_KEY="sua-chave"
```

Se estiver rodando pelo VS Code e a chave nao pegar, crie um arquivo chamado `.env` dentro da pasta `StudyHotkey` com:

```text
OPENAI_API_KEY=sua-chave
```

3. Opcional:

```powershell
$env:STUDYHOTKEY_MODEL="gpt-4o-mini"
$env:STUDYHOTKEY_API_URL="https://api.openai.com/v1/chat/completions"
$env:STUDYHOTKEY_REGION="100,100,900,600"
$env:STUDYHOTKEY_CAPTURE_MODE="full"
$env:STUDYHOTKEY_CURSOR_REGION_WIDTH="900"
$env:STUDYHOTKEY_CURSOR_REGION_HEIGHT="650"
$env:STUDYHOTKEY_IMAGE_DETAIL="auto"
$env:STUDYHOTKEY_MAX_IMAGE_SIZE="1000"
$env:STUDYHOTKEY_JPEG_QUALITY="76"
$env:STUDYHOTKEY_FALLBACK_ON_ERR="0"
```

`STUDYHOTKEY_REGION` limita o print para `x,y,largura,altura`. Sem isso, o app captura a tela inteira.
Use `STUDYHOTKEY_CAPTURE_MODE=cursor` se quiser capturar so uma area ao redor do cursor.
Nesse modo, coloque o mouse em cima ou perto da questao antes de apertar o atalho.
`STUDYHOTKEY_IMAGE_DETAIL`, `STUDYHOTKEY_MAX_IMAGE_SIZE` e `STUDYHOTKEY_JPEG_QUALITY` controlam qualidade e gasto por chamada. `STUDYHOTKEY_FALLBACK_ON_ERR=1` ativa uma segunda tentativa mais nitida quando a IA responder `Err.`, mas gasta mais.

4. Para executar manualmente:

```powershell
py StudyHotkey\main_direito.py
py StudyHotkey\main_matematica.py
py StudyHotkey\main_portugues.py
py StudyHotkey\main_geografia_historia.py
```

Execute apenas um dos comandos por vez.

Os inicializadores verificam o Python e as bibliotecas da pasta `vendor` e iniciam o
aplicativo em segundo plano. Eles nao executam `pip install`. Nao existe senha,
ativacao, vinculacao ao computador ou executavel compilado.

O aplicativo e iniciado por um supervisor VBS (`wscript.exe`). Se o processo Python
principal travar ou for encerrado isoladamente, ele sera iniciado novamente depois
de aproximadamente um segundo. Para encerrar o aplicativo e o supervisor corretamente,
use somente:

- `parar-studyhotkey.vbs`

O supervisor nao bloqueia os controles administrativos do Windows e nao configura
inicializacao automatica junto com o sistema.

## Usar em outro computador

Copie a pasta completa do projeto, preservando a pasta `StudyHotkey` e os arquivos
`.vbs`. Nao basta copiar somente o inicializador. No outro computador:

1. Tenha o Python 3.14 de 64 bits instalado e, se quiser, abra
   `instalar-requisitos.vbs` para verificar a compatibilidade.
2. Abra o inicializador da materia desejada.
3. Cole uma chave da API quando o inicializador pedir.

As bibliotecas foram empacotadas para Windows de 64 bits e Python 3.14. O verificador
aceita Python disponivel pelos comandos `py` ou `python` e testa todos os imports sem
acessar a internet. Nao e preciso alterar o codigo-fonte nem instalar pacotes com `pip`.

Atalho global:

- `Ctrl + Shift + 0`: captura a questao e solicita a resposta.
- `Ctrl + Shift + 9`: verifica a comunicacao, a chave e o acesso ao modelo da API.

O teste da API nao captura a tela. Ele faz uma pequena requisicao de texto e mostra
`API OK` ou `API FALHOU` no mesmo modal usado para as respostas. Em caso de falha,
consulte `last_error.txt` para ver o motivo tecnico.

Codigos exibidos pelo aplicativo:

- `ERP`: falha ao capturar o print ou imagem ilegivel/cortada.
- `ERQ`: a imagem esta legivel, mas nenhuma questao foi encontrada.
- `Err.`: falha tecnica restante, como erro da API ou resposta invalida.

Quando aparecer `Err.`, veja o motivo em:

- `last_error.txt`
- `last_status.txt`

O gasto estimado por chamada fica em:

- `usage_log.csv`
- `usage_summary.txt`

Por padrao, o calculo usa os precos do `gpt-4o-mini`: `$0.15` por 1M tokens de entrada e `$0.60` por 1M tokens de saida. Para outro modelo, ajuste:

```powershell
$env:STUDYHOTKEY_INPUT_COST_PER_1M="0.15"
$env:STUDYHOTKEY_OUTPUT_COST_PER_1M="0.60"
```
