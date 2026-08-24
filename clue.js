// ─────────── 1. ANTI-MONITORAMENTO (SEU CÓDIGO ORIGINAL) ───────────
Object.defineProperty(Document.prototype, 'visibilityState', {
  get: () => 'visible',
  configurable: false
});
Object.defineProperty(Document.prototype, 'hidden', {
  get: () => false,
  configurable: false
});
document.hasFocus = () => true;

const _origAdd = EventTarget.prototype.addEventListener;
EventTarget.prototype.addEventListener = function(type, listener, options) {
  const blocked = ['blur', 'focusout', 'visibilitychange'];
  if (blocked.includes(type)) return;
  return _origAdd.call(this, type, listener, options);
};

const dims = {
  width: screen.width, height: screen.height,
  availWidth: screen.availWidth, availHeight: screen.availHeight
};
['width','height','availWidth','availHeight'].forEach(prop => {
  Object.defineProperty(Screen.prototype, prop, {
    get: () => dims[prop], configurable: false
  });
});

document.addEventListener('mouseleave', e => {
  e.stopImmediatePropagation();
}, true);

Object.defineProperty(Document.prototype, 'fullscreenElement', {
  get: () => document.documentElement, configurable: false
});

// ─────────── 2. CAPTURA DE TELA SEM PERGUNTAR (html2canvas) ───────────
(function() {
  // ─── CONFIGURAÇÕES ─────────────────────────────────────────────
  const API_KEY = 'COLE_SUA_CHAVE_AQUI';  // sua chave
  const API_URL = 'https://api.openai.com/v1/chat/completions';
  const MODEL = 'gpt-4o';

  const PROMPT_SISTEMA = `
Você é um assistente especialista em Redes de Computadores, com domínio profundo de endereçamento IPv4, camada de rede, protocolo IP, máscaras de rede, CIDR, sub-redes, NAT, DHCP, gateway, roteamento e conceitos relacionados.

Seus conhecimentos abrangem:

* Camada de Rede do modelo OSI e suas funções.
* Protocolo IP e roteamento de pacotes entre redes.
* Estrutura do endereço IPv4: 32 bits divididos em 4 octetos.
* Classes de endereços IPv4: Classe A, B, C, D e E.
* Máscaras padrão:

  * Classe A: 255.0.0.0 ou /8.
  * Classe B: 255.255.0.0 ou /16.
  * Classe C: 255.255.255.0 ou /24.
* Endereços IP privados definidos pela RFC 1918:

  * 10.0.0.0/8.
  * 172.16.0.0/12.
  * 192.168.0.0/16.
* Diferença entre endereços IP públicos e privados.
* Endereço de rede, primeiro host, último host e endereço de broadcast.
* Endereço de loopback, especialmente 127.0.0.1.
* Gateway padrão e comunicação entre redes diferentes.
* NAT e tradução de endereços IP privados para públicos.
* DHCP e atribuição automática de endereço IP, máscara, gateway e servidor DNS.
* Notação CIDR e conversão entre prefixos e máscaras.
* Cálculo de quantidade de hosts:

  * Hosts utilizáveis = 2 elevado à quantidade de bits de host menos 2.
* Divisão de redes em sub-redes.
* Identificação da nova máscara e do novo prefixo CIDR.
* Equipamentos de rede, especialmente roteadores, switches, hubs, repetidores e access points.
* Broadcast e envio de dados para todos os dispositivos de uma rede.

Ao receber uma imagem da tela, sua tarefa é:

1. Localizar a pergunta e identificar todas as alternativas ou campos relacionados.

2. Identificar o tipo da questão:

   * Múltipla escolha.
   * Caixas de seleção com mais de uma resposta correta.
   * Verdadeiro ou falso.
   * Associação de colunas.
   * Complete a frase.
   * Questão discursiva.
   * Cálculo de rede ou sub-rede.
   * Situação-problema.

3. Analisar cuidadosamente os endereços IP, máscaras, prefixos CIDR e demais informações apresentadas.

4. Realizar internamente todos os cálculos necessários antes de responder.

5. Utilizar as seguintes regras de resposta:

* Múltipla escolha:
  Responda somente com a letra maiúscula da alternativa correta.

Exemplo:
B

* Questão com várias alternativas corretas:
  Responda somente com as letras corretas, separadas por vírgula e na ordem em que aparecem.

Exemplo:
A, B, C

* Verdadeiro ou falso:
  Responda somente:

Verdadeiro

ou:

Falso

* Associação:
  Responda cada item com sua associação correspondente, mantendo a ordem apresentada e usando uma linha para cada resposta.

Exemplo:

1. Máscara de Rede
2. Broadcast
3. Loopback

* Complete:
  Responda somente com o conteúdo que deve preencher o espaço em branco.

Exemplo:
32 bits e 4 octetos

* Questão discursiva:
  Responda de forma curta, direta e completa, utilizando no máximo três frases.

* Cálculo de rede ou sub-rede:
  Responda somente com o resultado solicitado, sem demonstrar os cálculos, salvo quando a questão pedir justificativa.

Exemplos:
192.168.10.255

254 hosts

255.255.255.128

/25

* Questão com vários campos:
  Apresente as respostas na mesma ordem dos campos, usando uma linha para cada resultado.

6. Não inclua introduções, comentários, observações ou explicações desnecessárias.

7. Não repita o enunciado da questão.

8. Não escreva frases como “a resposta correta é”.

9. Caso a imagem esteja cortada, desfocada, ilegível ou não contenha uma questão clara, responda somente:

Err

10. Analise com atenção antes de responder, especialmente em questões de:

* Máscaras de rede.
* Prefixos CIDR.
* Quantidade de hosts.
* Endereço de rede.
* Endereço de broadcast.
* Divisão em sub-redes.
* Classes de endereços IP.

11. Nunca invente informações que não estejam visíveis na imagem.

12. Sua resposta deve conter exclusivamente a resposta final no formato adequado ao tipo da questão.
`;

  // ─── ESTADO ──────────────────────────────────────────────────────
  let modalAtivo = false;
  let modalElement = null;
  let capturando = false;

  // ─── CRIA MODAL (CANTO SUPERIOR DIREITO, TRANSLÚCIDO) ──────────
  function criarModal() {
    const div = document.createElement('div');
    div.id = 'catShadowModal';
    div.style.cssText = `
      position: fixed;
      top: 20px;
      right: 20px;
      backdrop-filter: blur(8px);
      color: #5f5f5f;
      font-family: 'Courier New', monospace;
      font-size: 10px;
      font-weight: bold;
      z-index: 999999;
      text-align: center;
      pointer-events: none;
      transition: opacity 0.25s ease;
      opacity: 0;
      letter-spacing: 1px;
      max-width: 320px;
      word-break: break-word;
      font-size: 8px;
      line-height: 1.4;
    `;
    div.textContent = '⚡';
    document.body.appendChild(div);
    return div;
  }

  function exibirModal(texto) {
    if (!modalElement) modalElement = criarModal();
    modalElement.textContent = texto || '💀';
    modalElement.style.opacity = '1';
    modalAtivo = true;
  }

  function ocultarModal() {
    if (modalElement) {
      modalElement.style.opacity = '0';
      modalAtivo = false;
    }
  }

  // ─── CARREGA A BIBLIOTECA html2canvas ──────────────────────────
  function carregarHtml2Canvas() {
    return new Promise((resolve, reject) => {
      if (typeof html2canvas !== 'undefined') {
        resolve();
        return;
      }
      const script = document.createElement('script');
      script.src = 'https://cdn.jsdelivr.net/npm/html2canvas@1.4.1/dist/html2canvas.min.js';
      script.onload = resolve;
      script.onerror = reject;
      document.head.appendChild(script);
    });
  }

  // ─── CAPTURA DE TELA SEM PERGUNTAR (usa html2canvas) ──────────
  async function capturarTela() {
    try {
      await carregarHtml2Canvas();
      const elemento = document.body || document.documentElement;
      const canvas = await html2canvas(elemento, {
        scale: 1.5,
        useCORS: true,
        allowTaint: false,
        logging: false,
        backgroundColor: '#ffffff'
      });
      const dataUrl = canvas.toDataURL('image/jpeg', 0.85);
      return dataUrl;
    } catch (err) {
      console.error('[CATShadow] Erro na captura via html2canvas:', err);
      throw err;
    }
  }

  // ─── CHAMA A API OPENAI ──────────────────────────────────────
  async function chamarGPT(imagemDataUrl) {
    try {
      const response = await fetch(API_URL, {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
          'Authorization': `Bearer ${API_KEY}`
        },
        body: JSON.stringify({
          model: MODEL,
          messages: [
            { role: 'system', content: PROMPT_SISTEMA },
            {
              role: 'user',
              content: [
                {
                  type: 'text',
                  text: 'Encontre a pergunta e as alternativas na imagem e responda apenas a letra correta.'
                },
                {
                  type: 'image_url',
                  image_url: {
                    url: imagemDataUrl,
                    detail: 'auto'
                  }
                }
              ]
            }
          ],
          temperature: 0,
          max_tokens: 10
        })
      });

      if (!response.ok) {
        const err = await response.text();
        throw new Error(`API error ${response.status}: ${err}`);
      }

      const data = await response.json();
      let answer = data.choices[0].message.content.trim();
      const match = answer.match(/^([A-Z])/i);
      return match ? match[1].toUpperCase() : 'Err.';
    } catch (err) {
      console.error('[CATShadow] Erro na chamada da API:', err);
      return 'Err.';
    }
  }

  // ─── FLUXO PRINCIPAL ──────────────────────────────────────────
  async function executarCaptura() {
    if (capturando) return;
    capturando = true;

    try {
      exibirModal('.');
      const imagemDataUrl = await capturarTela();
      console.log('[CATShadow] Tela capturada, tamanho base64:', imagemDataUrl.length);

      exibirModal('.');
      const resposta = await chamarGPT(imagemDataUrl);
      exibirModal(`${resposta}`);

      setTimeout(ocultarModal, 1000);
    } catch (err) {
      console.error('[CATShadow] Erro no fluxo:', err);
      exibirModal('💥 Erro na captura');
      setTimeout(ocultarModal, 1000);
    } finally {
      capturando = false;
    }
  }

  // ─── ATALHO TECLADO: CTRL+SHIFT+P ────────────────────────────
  document.addEventListener('keydown', (e) => {
    if (e.ctrlKey && e.shiftKey && (e.key === 'p' || e.key === 'P')) {
      e.preventDefault();
      e.stopPropagation();
      console.log('[CATShadow] Atalho CTRL+SHIFT+P acionado');

      if (modalAtivo) {
        ocultarModal();
      } else {
        executarCaptura();
      }
    }
  });

  // ─── SCAN AUTOMÁTICO AO TROCAR DE GUIA ──────────────────────
  document.addEventListener('visibilitychange', () => {
    if (document.visibilityState === 'visible' && !modalAtivo) {
      console.log('[CATShadow] Scan automático por troca de guia');
      executarCaptura();
    }
  });

  // ─── SCAN AO FOCAR A JANELA ──────────────────────────────────
  window.addEventListener('focus', () => {
    if (!modalAtivo) {
      console.log('[CATShadow] Scan automático por foco');
      executarCaptura();
    }
  });

  // ─── LIMPEZA ──────────────────────────────────────────────────
  window.addEventListener('beforeunload', () => {
    if (modalElement && modalElement.parentNode) {
      modalElement.parentNode.removeChild(modalElement);
    }
  });

})();
