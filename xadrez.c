#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este programa simula a movimentação de peças de xadrez utilizando estruturas de repetição e recursão.

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV 2

// Função recursiva para movimentação do Bispo
void mover_bispo(int movimentos) {
    if (movimentos == 0) return;
    printf("Diagonal Superior Direita\n");
    mover_bispo(movimentos - 1);
}

int main() {
    int i;

    // Movimentação do Bispo usando recursão
    printf("Movimentação do Bispo:\n");
    mover_bispo(BISPO_MOV);

    // Movimentação da Torre usando while
    printf("\nMovimentação da Torre:\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha usando do-while
    printf("\nMovimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);

    // Movimentação do Cavalo usando loops aninhados
    printf("\nMovimentação do Cavalo:\n");
    for (i = 0; i < CAVALO_MOV; i++) {
        for (int j = 0; j < CAVALO_MOV; j++) {
            printf("Movimento em L: Passo %d-%d\n", i + 1, j + 1);
        }
    }
    
    return 0;
}
