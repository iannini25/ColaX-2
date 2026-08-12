# StudyHotkey - Circuitos Eletricos

Modo estudo com OCR na nuvem.

O app local captura a tela, escuta o atalho e mostra a resposta. A IA na nuvem le o
enunciado, interpreta o diagrama do circuito, realiza o calculo e identifica a alternativa.

O prompt esta preparado para questoes com resistores, fontes, associacoes em serie e
paralelo, leis de Ohm e Kirchhoff, potencia, analise nodal/de malhas e grandezas com
prefixos como m, u, k e M. Em multipla escolha, o retorno exibido e somente a letra.

## Como usar

1. Configure a chave da IA:

```powershell
$env:OPENAI_API_KEY="sua-chave"
```

Se estiver rodando pelo VS Code e a chave nao pegar, crie um arquivo chamado `.env` dentro da pasta `StudyHotkey` com:

```text
OPENAI_API_KEY=sua-chave
```

2. Opcional:

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

3. Execute:

```powershell
py main.py
```

Ou de dois cliques em `iniciar-studyhotkey.vbs`, na pasta principal. O script localiza o Python,
instala automaticamente as dependencias de `StudyHotkey\requirements.txt` e inicia
o aplicativo em segundo plano. Se o Python ou alguma dependencia falhar, uma mensagem
informa o problema.

## Senha e vinculacao ao computador

A senha inicial ja esta configurada e fica somente como hash protegido em
`StudyHotkey\senha.json`; o texto original nao e salvo no projeto. Na primeira abertura,
`iniciar-studyhotkey.vbs` pede a senha e cria `StudyHotkey\ativacao.json`, vinculado ao
Windows atual. Depois disso, o programa abre sem pedir ou exibir a senha.

Se a pasta ja ativada for copiada para outro computador, o aplicativo recusa a
execucao. Para trocar a senha, execute `configurar-senha.bat`: a senha atual sera
exigida, a nova senha fica oculta durante a digitacao e a ativacao anterior e removida.

## Pasta para venda

Execute `gerar-distribuicao.ps1` para compilar uma nova versao. O resultado fica em
`distribuicao\envie essa`. Envie somente essa pasta ao comprador, que deve abrir
`iniciar.vbs`. Para encerrar, deve abrir `parar.vbs`. A distribuicao inclui o Python e
as dependencias compiladas, portanto o outro computador nao precisa instalar nada.
Essa pasta nao contem arquivos `.py`, `.env`, chave em texto aberto ou ativacao de
outro computador.

A chave da API distribuida fica criptografada com a senha em `api_key.enc`. Na primeira
ativacao ela e descriptografada apenas em memoria e armazenada novamente usando a
protecao de dados do Windows para aquela conta e computador.

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

1. Instale o Python 3 para Windows, caso ainda nao esteja instalado.
2. Configure `OPENAI_API_KEY` no ambiente ou no arquivo `StudyHotkey\.env`.
3. Abra `iniciar-studyhotkey.vbs`.

O inicializador aceita Python disponivel pelos comandos `py` ou `python`, instala
automaticamente as bibliotecas de `requirements.txt` e verifica todos os imports
necessarios antes de iniciar. Nao e preciso alterar o codigo-fonte.

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
