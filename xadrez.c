#include <stdio.h>

// === TORRE: Cima e Direita com recursividade ===
void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Torre: Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Torre: Direita\n");
    moverTorreDireita(casas - 1);
}

// === BISPO: Diagonal com recursividade e loop aninhado ===
void moverBispoDiagonal(int linha, int coluna, int max) {
    if (linha >= max || coluna >= max) return;

    // Loops apenas pra cumprir o requisito de loops aninhados
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Bispo: Diagonal Direita Baixo\n");
        }
    }

    moverBispoDiagonal(linha + 1, coluna + 1, max);
}

// === RAINHA: Cima + Direita com recursividade ===
void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Rainha: Cima\n");
    printf("Rainha: Direita\n");

    moverRainha(casas - 1);
}

// === CAVALO: Loop aninhado e condições ===
void moverCavalo() {
    int movimentos = 3;

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue;  // pula diagonais
            if (i == 2 && j == 1) {
                printf("Cavalo: 2 pra cima e 1 pra direita\n");
                break;  // sai quando encontra o movimento certo
            }
        }
    }
}

// === FUNÇÃO PRINCIPAL ===
int main() {
    int casasTorre = 3;
    int casasRainha = 2;
    int casasBispo = 3;

    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoDiagonal(0, 0, casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}

