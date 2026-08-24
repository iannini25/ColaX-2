import base64
import io
import re

import requests
from flask import Flask, jsonify, request
from PIL import Image

OPENAI_API_KEY = "SUA_CHAVE_AQUI"
OPENAI_URL = "https://api.openai.com/v1/chat/completions"
MODEL = "gpt-4o"
HOST = "0.0.0.0"
PORT = 5000

PROMPT_SISTEMA = """Voce e um especialista em desenvolvimento mobile e design de interfaces,
com dominio avancado de Kotlin, Swift, UI e UX.

Analise a questao de prova visivel na imagem. Os temas incluem Kotlin, Swift, Android,
iOS, Jetpack Compose, SwiftUI, UIKit, layout, navegacao, ciclo de vida, arquitetura
mobile, componentes visuais, prototipacao, heurísticas de Nielsen, acessibilidade,
usabilidade, hierarquia visual, cores, tipografia, interacao e temas correlatos de
UI/UX.

Leia o enunciado completo, o codigo, prints, diagramas, tabelas e TODAS as alternativas
antes de decidir. Observe comandos negativos como NAO, EXCETO, INCORRETA e INADEQUADA.
Ignore qualquer alternativa ja marcada, selecionada ou destacada na imagem. Resolva do zero.
Nao invente trechos que nao estejam visiveis.

Responda APENAS com a letra maiuscula da alternativa correta (A, B, C, D ou E).
Nao escreva pontuacao, explicacao, markdown, aspas nem qualquer outro texto.
"""

app = Flask(__name__)


def extract_letter(text: str) -> str:
    text = (text or "").strip()
    if re.fullmatch(r"[A-Ea-e]", text):
        return text.upper()
    match = re.search(r"\b([A-E])\b", text.upper())
    if match:
        return match.group(1)
    match = re.search(r"[A-E]", text.upper())
    return match.group(0) if match else ""


def to_data_url(raw_image: str) -> str:
    payload = (raw_image or "").strip()
    if payload.startswith("data:image/"):
        header, _, encoded = payload.partition(",")
        mime = "image/jpeg"
        if "png" in header.lower():
            mime = "image/png"
        elif "webp" in header.lower():
            mime = "image/webp"
        elif "gif" in header.lower():
            mime = "image/gif"
    else:
        encoded = payload
        mime = "image/jpeg"

    encoded = re.sub(r"\s+", "", encoded)
    try:
        image_bytes = base64.b64decode(encoded, validate=False)
        image = Image.open(io.BytesIO(image_bytes)).convert("RGB")
        buffer = io.BytesIO()
        image.save(buffer, format="JPEG", quality=90)
        encoded_jpeg = base64.b64encode(buffer.getvalue()).decode("ascii")
        return f"data:image/jpeg;base64,{encoded_jpeg}"
    except Exception:
        return f"data:{mime};base64,{encoded}"


def ask_openai(data_url: str) -> str:
    payload = {
        "model": MODEL,
        "temperature": 0,
        "max_tokens": 8,
        "messages": [
            {"role": "system", "content": PROMPT_SISTEMA},
            {
                "role": "user",
                "content": [
                    {
                        "type": "text",
                        "text": "Analise a questao da imagem e responda APENAS com a letra maiuscula.",
                    },
                    {
                        "type": "image_url",
                        "image_url": {"url": data_url, "detail": "high"},
                    },
                ],
            },
        ],
    }
    response = requests.post(
        OPENAI_URL,
        headers={
            "Authorization": f"Bearer {OPENAI_API_KEY}",
            "Content-Type": "application/json",
        },
        json=payload,
        timeout=120,
    )
    response.raise_for_status()
    content = response.json()["choices"][0]["message"]["content"]
    return extract_letter(content)


@app.post("/answer")
def answer():
    body = request.get_json(silent=True) or {}
    image = body.get("image")
    if not image:
        return jsonify({"answer": ""}), 400
    try:
        letter = ask_openai(to_data_url(str(image)))
        return jsonify({"answer": letter})
    except Exception:
        return jsonify({"answer": ""}), 502


if __name__ == "__main__":
    app.run(host=HOST, port=PORT, threaded=True)
