
#include <stdio.h>

// Número de casas para movimentação (padrão)
const int casas = 3;

// -----------------------------
// Funções - Torre (recursivo)
// -----------------------------
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreBaixo(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(casas - 1);
}

void moverTorreEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// -----------------------------
// Função - Bispo (recursivo)
// -----------------------------
void moverBispo(int i, int j, int casas) {
    if (casas == 0) return;
    printf("Diagonal superior direita\n");
    moverBispo(i + 1, j + 1, casas - 1);
}

// -----------------------------
// Função - Bispo (com loops)
// -----------------------------
void moverBispoComLoop(int casas) {
    printf("Bispo com loop aninhado:\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {
                printf("Diagonal superior direita\n");
            }
        }
    }
}

// -----------------------------
// Função - Rainha
// (torre + bispo)
// -----------------------------
void moverRainha(int casas) {
    printf("Rainha:\n");
    moverTorreCima(casas);
    moverTorreDireita(casas);
    moverBispo(0, 0, casas);
}

// -----------------------------
// Função - Cavalo
// -----------------------------
void moverCavalo() {
    printf("Movimento do Cavalo (2 cima, 1 direita):\n");
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

// -----------------------------
// Função Principal
// -----------------------------
int main() {
    printf("Movimento da Torre:\n");
    moverTorreCima(casas);
    moverTorreDireita(casas);
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispo(0, 0, casas);
    printf("\n");

    moverBispoComLoop(casas);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casas);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
