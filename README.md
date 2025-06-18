# ♟️ Desafio Final - Xadrez em C (Estácio)

Projeto desenvolvido por **Vinicius** para o desafio final da disciplina de Algoritmos e Programação da Estácio.

## 📌 Objetivo

Simular os movimentos das peças de xadrez usando estruturas avançadas em C, como **recursividade** e **loops aninhados**:

- Torre: movimentação em linha reta (cima e direita) com recursividade;
- Bispo: movimentação diagonal com recursividade e loops aninhados;
- Rainha: combinação da torre com recursividade;
- Cavalo: movimentação em “L” (duas casas pra cima e uma pra direita) usando loops aninhados e controle com `continue` e `break`.

## 🧠 Conceitos aplicados

- Funções recursivas
- Loops aninhados (for dentro de for)
- Uso de `break` e `continue` para controle de fluxo
- Organização de código e funções bem separadas

## ▶️ Como executar

1. Clone o repositório ou copie o código `xadrez.c`:
```bash
git clone https://github.com/seu-usuario/seu-repo-xadrez.git
cd seu-repo-xadrez
Compile o código com gcc:

bash
gcc xadrez.c -o xadrez
./xadrez
Também pode compilar usando IDEs como Code::Blocks, Dev-C++ ou o terminal do VS Code.

💬 Saída esperada
O programa exibe, no console, os movimentos feitos por cada peça, como:

Movimento da Torre:
Torre: Cima
Torre: Cima
Torre: Cima
Torre: Direita
Torre: Direita
Torre: Direita

Movimento do Bispo:
Bispo: Diagonal Direita Baixo
...

Movimento da Rainha:
Rainha: Cima
Rainha: Direita
...

Movimento do Cavalo:
Cavalo: 2 pra cima e 1 pra direita
👨‍💻 Autor
Desenvolvido por Vinicius
Aluno de Análise e Desenvolvimento de Sistemas - Estácio
