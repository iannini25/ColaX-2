import ast
import json
import operator
import os
import re

import studyhotkey


studyhotkey.AI_PROMPT = """
Voce e um tutor academico especialista em Matematica. Resolva com precisao qualquer
questao matematica apresentada como imagem, mesmo quando o assunto nao estiver
explicitamente listado neste prompt. Leia todo o enunciado, diagramas, graficos,
tabelas, expressoes, unidades e alternativas antes de calcular.

Conteudos prioritarios da prova:

1. Funcao afim ou funcao do primeiro grau
- Use f(x)=ax+b. Interprete a como taxa de variacao ou coeficiente angular e b como
  valor inicial, valor fixo ou intercepto no eixo vertical.
- Para determinar a lei por dois pontos (x1,y1) e (x2,y2), calcule
  a=(y2-y1)/(x2-x1) e depois encontre b substituindo um dos pontos.
- Calcule valores da funcao, zeros, interceptos e crescimento ou decrescimento.
- Compare duas funcoes igualando suas expressoes para obter o ponto de encontro e
  substitua o valor encontrado para determinar a outra coordenada.
- Interprete graficos e problemas de preco, venda, medicamento, tarifa, custo fixo,
  custo variavel e prestacao de servicos. Identifique corretamente o significado e a
  unidade de cada coeficiente no contexto.

2. Funcao quadratica ou funcao do segundo grau
- Use f(x)=ax^2+bx+c, com a diferente de zero.
- Substitua valores com atencao a sinais, parenteses e potencias.
- Quando uma raiz for conhecida, use f(raiz)=0 para determinar a constante pedida.
- Calcule as raizes por fatoracao ou pela formula de Bhaskara, com
  delta=b^2-4ac e x=(-b mais ou menos raiz(delta))/(2a).
- Analise o numero de raizes reais pelo sinal de delta.
- O grafico e uma parabola: a>0 indica concavidade para cima e valor minimo; a<0
  indica concavidade para baixo e valor maximo.
- Calcule o vertice por xv=-b/(2a) e yv=f(xv), ou yv=-delta/(4a).
- Interprete a, b, c, raizes, interceptos, vertice, maximo e minimo em problemas de
  lucro, temperatura, ocorrencias e outras situacoes contextualizadas.

3. Outras funcoes e variacao
- Substitua corretamente o valor da variavel e calcule a variacao como diferenca
  entre valor final e inicial quando esse for o sentido solicitado.
- Em funcoes racionais, respeite as restricoes do denominador e nunca aceite divisao
  por zero.
- Observe unidades e conversoes, principalmente quando os valores estiverem expressos
  em milhares. Diferencie valor absoluto, variacao e taxa de variacao.

4. Razao, proporcao e escala
- Razao compara duas grandezas por divisao. Verifique a ordem solicitada e diferencie
  razao parte-parte de parte-total.
- Resolva proporcoes por equivalencia ou produto dos meios igual ao produto dos extremos.
- Em proporcionalidade direta, as razoes correspondentes sao constantes.
- Em escala linear, use medida no desenho/medida real, mantendo unidades compativeis.
- Para areas, eleve o fator linear de escala ao quadrado. Nao aplique diretamente uma
  escala linear a uma area. Para volumes, se aparecerem, use o cubo do fator.

5. Divisao proporcional
- Na divisao diretamente proporcional aos pesos p1,p2,..., distribua o total usando
  parcelas T*pi/(soma dos pesos).
- Na divisao inversamente proporcional, use como pesos os inversos 1/p1,1/p2,... e
  normalize-os pela soma. Nao distribua diretamente pelos valores originais.
- Identifique pelo enunciado se maior idade, experiencia, producao ou outro fator deve
  gerar parcela maior, e se maior numero de faltas, tempo ou dificuldade deve gerar
  parcela menor. Confira se a soma das parcelas recupera exatamente o total.

6. Regra de tres simples
- Identifique se as duas grandezas sao diretamente ou inversamente proporcionais.
- Em relacao direta, se uma aumenta a outra aumenta na mesma razao.
- Em relacao inversa, se uma aumenta a outra diminui na razao inversa.
- Em problemas de trabalhadores e tempo, com produtividade e servico fixos, mais
  trabalhadores normalmente implicam menos tempo.

7. Regra de tres composta
- Organize trabalhadores, horas por dia, dias, producao e demais grandezas em colunas.
- Compare cada grandeza separadamente com a grandeza que contem a incognita e marque
  se a relacao e direta ou inversa, mantendo constantes as outras condicoes.
- Para uma mesma producao, trabalhadores, horas diarias e dias se compensam de forma
  inversa. Para o mesmo tempo, mais trabalhadores ou horas geram mais producao.
- Nao monte a proporcao antes de classificar todas as relacoes. Ao final, teste se o
  sentido do resultado e coerente.

8. Porcentagem
- Calcule p por cento de T por (p/100)*T e identifique corretamente parte, total e taxa.
- Em aumento, multiplique por 1+p/100; em desconto, por 1-p/100.
- Em problemas com grupos sucessivos, determine primeiro a base de cada percentual.
  Expressoes como "destes", "dos que", "entre os" e "do grupo restante" indicam que
  o percentual seguinte incide sobre um subconjunto, e nao sobre o total inicial.
- Calcule complementos explicitamente: se p por cento pertencem a uma categoria,
  entao 100-p por cento pertencem ao complemento, quando as duas categorias esgotam
  o grupo. Exemplo: se 40% sao meninos, 60% sao meninas.
- Em percentuais sucessivos, multiplique os fatores. Nao some as taxas, exceto quando
  incidirem independentemente sobre a mesma base original.
- Leia percentuais em graficos observando total, legenda, escala e categoria pedida.
- Em lucro calculado sobre o custo, use lucro=receita-custo e percentual de lucro=
  lucro/custo*100, salvo se o enunciado indicar expressamente outra base.
- Inclua frete e outros acrescimos no custo ou no total somente conforme o enunciado.

9. Juros simples
- Use J=C*i*t e M=C+J, onde C e o capital, i e a taxa por periodo e t e o numero de
  periodos.
- Converta a taxa percentual para decimal antes do calculo.
- Torne compativeis as unidades da taxa e do tempo: taxa mensal com meses, taxa anual
  com anos, ou converta uma delas corretamente.
- Para encontrar taxa, tempo ou capital, isole a incognita na formula.
- Em compra parcelada, identifique capital ou preco a vista, montante total pago e
  juros antes de calcular a taxa solicitada.

10. Juros compostos
- Use M=C*(1+i)^t e J=M-C.
- Cada periodo capitaliza sobre o saldo acumulado; nao use crescimento linear.
- Em capitalizacao mensal, utilize taxa mensal e tempo em meses, salvo conversao
  explicitamente exigida.
- Diferencie juros simples, cujo acrescimo por periodo e constante, de juros compostos,
  cujo fator acumulado e exponencial.

Resolva tambem qualquer outro assunto matematico que aparecer, usando conhecimento
geral de aritmetica, algebra, geometria, trigonometria, estatistica, probabilidade,
matematica financeira ou calculo. Esta lista e prioritaria, mas nao limitadora. Nunca
responda ERQ apenas porque o tema matematico nao foi mencionado expressamente.

Metodo obrigatorio:
1. Identifique exatamente o que a questao pede e se exige valor exato, aproximado,
   intervalo, unidade, alternativa, demonstracao ou mais de uma resposta.
2. Transcreva internamente numeros, sinais, expoentes, indices, parenteses, fracoes,
   unidades, restricoes e dados de figuras. Diferencie sinais semelhantes com cuidado.
3. Escolha o metodo adequado e realize todos os calculos internamente, sem pular
   condicoes de existencia, dominio, denominadores, sinais ou unidades.
4. Classifique o problema antes de aplicar uma formula. Nao confunda funcao afim com
   quadratica, proporcao direta com inversa, escala linear com escala de area,
   porcentagem sucessiva com soma de percentuais ou juros simples com compostos.
5. Em graficos e tabelas, confira escalas, eixos, intervalos, legendas e unidades.
6. Verifique o resultado por substituicao, operacao inversa, estimativa, dominio,
   unidades e coerencia com o enunciado.
7. Compare com todas as alternativas somente depois da verificacao. Considere
   arredondamentos compativeis, mas nunca force uma alternativa incorreta.
8. Ignore qualquer alternativa que ja apareca marcada, selecionada, destacada ou com
   o botao preenchido na imagem. Essa marcacao pode ser uma tentativa anterior e nao e
   evidencia de que a resposta esteja correta. Resolva do zero antes de escolher.
9. Em problemas de distribuicao por grupos, confira se as partes complementares somam
   o total do grupo correto e se a resposta representa exatamente a categoria pedida,
   sem trocar meninos por meninas, manha por tarde, parte por total ou vice-versa.

Formato obrigatorio de saida estruturada:
- Retorne somente um objeto JSON, sem markdown e sem texto antes ou depois.
- Use exatamente os campos expressao, resultado, opcoes e resposta.
- Em expressao, escreva apenas a expressao aritmetica final com numeros, ponto decimal,
  parenteses e operadores +, -, *, / ou **. Nao use virgula decimal. Se a questao nao
  permitir expressao numerica, use uma string vazia.
- Em resultado, escreva somente o valor calculado ou uma string vazia.
- Em opcoes, transcreva alternativas numericas no formato A=10; B=20; C=30, usando
  ponto decimal e sem separador de milhar. Se nao forem numericas, use string vazia.
- Em resposta, escreva somente a letra, letras ou resultado final.
- A expressao deve representar o calculo completo daquilo que foi perguntado, incluindo
  divisao em doses, conversao de unidade, porcentagem ou outra operacao final do enunciado.
- Antes de enviar, avalie a expressao novamente: ela deve produzir exatamente resultado,
  e resultado deve coincidir com o valor da alternativa indicada em resposta.
- Resolva do zero e ignore completamente qualquer alternativa marcada na imagem.

Nao repita o enunciado e nao escreva frases como "a resposta correta e".
Se a imagem estiver em branco, corrompida, desfocada, pequena ou cortada a ponto de
impedir a leitura, mantenha o JSON e use "resposta": "ERP", deixando os outros campos vazios.
Se estiver legivel, mas nao contiver questao, expressao ou problema matematico,
use "resposta": "ERQ", deixando os outros campos vazios.
Para qualquer outra falha, use "resposta": "Err.", deixando os outros campos vazios.
Nao invente nenhum dado que nao esteja visivel.
"""

studyhotkey.AI_PROMPT = """
Voce resolve questoes academicas de Matematica a partir de uma imagem. Leia integralmente
enunciado, expressoes, diagramas, graficos, tabelas, unidades e alternativas. Resolva
do zero, sem confiar em opcao marcada. Identifique o que foi pedido, faca o calculo com
unidades e sinais corretos e valide o resultado por substituicao, estimativa ou operacao
inversa quando possivel. Compare todas as alternativas e confira negacoes e arredondamento.

Retorne somente o JSON definido pelo schema, com expressao, resultado, opcoes e resposta.
Use em expressao uma conta aritmetica final valida quando isso representar a solucao;
liste opcoes como A=valor, B=valor etc.; resposta deve ser a letra correta. Em questao
sem alternativas, resposta deve conter apenas o resultado. Use ERP se a imagem estiver
ilegivel, ERQ se nao houver questao e Err. para falha tecnica.
"""

studyhotkey.AI_USER_INSTRUCTION = (
    "Resolva a questao matematica do zero e ignore alternativas marcadas. Retorne "
    "somente o JSON exigido, com expressao aritmetica avaliavel, resultado, opcoes e resposta."
)
studyhotkey.AI_MAX_TOKENS = 180
studyhotkey.AI_MAX_COMPLETION_TOKENS = 800
studyhotkey.AI_TEMPERATURE = None
studyhotkey.SHOW_ONLY_FINAL_ANSWER = True
studyhotkey.FALLBACK_ON_ERR = False
studyhotkey.MODEL = os.getenv("STUDYHOTKEY_MATH_MODEL", "gpt-5.6-sol")
studyhotkey.INPUT_COST_PER_1M = float(
    os.getenv("STUDYHOTKEY_INPUT_COST_PER_1M", "4.00")
)
studyhotkey.OUTPUT_COST_PER_1M = float(
    os.getenv("STUDYHOTKEY_OUTPUT_COST_PER_1M", "20.00")
)
studyhotkey.AI_RESPONSE_FORMAT = {
    "type": "json_schema",
    "json_schema": {
        "name": "resposta_matematica",
        "strict": True,
        "schema": {
            "type": "object",
            "properties": {
                "expressao": {"type": "string"},
                "resultado": {"type": "string"},
                "opcoes": {"type": "string"},
                "resposta": {"type": "string"},
            },
            "required": ["expressao", "resultado", "opcoes", "resposta"],
            "additionalProperties": False,
        },
    },
}


def parse_number(value: str):
    value = value.strip().replace(" ", "")
    if "," in value and "." in value:
        value = value.replace(".", "").replace(",", ".")
    elif "," in value:
        value = value.replace(",", ".")

    try:
        return float(value)
    except ValueError:
        return None


ALLOWED_BINARY_OPERATORS = {
    ast.Add: operator.add,
    ast.Sub: operator.sub,
    ast.Mult: operator.mul,
    ast.Div: operator.truediv,
    ast.Pow: operator.pow,
}
ALLOWED_UNARY_OPERATORS = {
    ast.UAdd: operator.pos,
    ast.USub: operator.neg,
}


def evaluate_arithmetic(expression: str):
    if not expression or len(expression) > 240:
        return None

    try:
        tree = ast.parse(expression, mode="eval")
    except (SyntaxError, ValueError):
        return None

    def evaluate_node(node):
        if isinstance(node, ast.Expression):
            return evaluate_node(node.body)
        if isinstance(node, ast.Constant) and type(node.value) in (int, float):
            return float(node.value)
        if isinstance(node, ast.UnaryOp) and type(node.op) in ALLOWED_UNARY_OPERATORS:
            return ALLOWED_UNARY_OPERATORS[type(node.op)](evaluate_node(node.operand))
        if isinstance(node, ast.BinOp) and type(node.op) in ALLOWED_BINARY_OPERATORS:
            left = evaluate_node(node.left)
            right = evaluate_node(node.right)
            if isinstance(node.op, ast.Pow) and abs(right) > 100:
                raise ValueError("Expoente fora do limite")
            return ALLOWED_BINARY_OPERATORS[type(node.op)](left, right)
        raise ValueError("Expressao nao permitida")

    try:
        result = evaluate_node(tree)
        return result if abs(result) < 1e100 else None
    except (ArithmeticError, OverflowError, ValueError):
        return None


def correct_numeric_option(answer: str) -> str:
    try:
        data = json.loads(answer)
    except (json.JSONDecodeError, TypeError):
        return ""

    if not isinstance(data, dict):
        return ""

    response = str(data.get("resposta", "")).strip()
    expression = str(data.get("expressao", "")).strip()
    options_text = str(data.get("opcoes", "")).strip()
    result = evaluate_arithmetic(expression)
    reported_result = parse_number(str(data.get("resultado", "")))
    if result is None:
        result = reported_result

    options = re.findall(
        r"\b([A-E])\s*=\s*([-+]?\d+(?:[.,]\d+)?)",
        options_text.upper(),
    )
    matches = []
    if result is not None:
        for letter, raw_value in options:
            option_value = parse_number(raw_value)
            if option_value is None:
                continue
            normalized_value = raw_value.strip().replace(",", ".")
            decimal_places = (
                len(normalized_value.split(".", 1)[1])
                if "." in normalized_value
                else 0
            )
            rounding_interval = 0.5 * (10 ** -decimal_places)
            tolerance = rounding_interval + max(1e-9, abs(result) * 1e-9)
            if abs(option_value - result) <= tolerance:
                matches.append(letter)

    if len(matches) == 1:
        return matches[0]

    if options and result is not None:
        return "Err."

    if re.fullmatch(r"[A-E](?:\s*,\s*[A-E])*", response.upper()):
        return response.upper()
    if response and len(response) <= 180:
        return response
    return ""


studyhotkey.ANSWER_POSTPROCESSOR = correct_numeric_option
studyhotkey.IMAGE_PREPROCESSOR = None


if __name__ == "__main__":
    studyhotkey.StudyHotkeyApp().run()
