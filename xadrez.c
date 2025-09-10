#include <stdio.h>

int main() {
    // 
    // Constantes de movimentação
    // 
    const int BISPO_MOV = 5;     // casas para o bispo
    const int TORRE_MOV = 5;     // casas para a torre
    const int RAINHA_MOV = 8;    // casas para a rainha

     // 
    // Bispo - usando FOR
    // 
    printf("=== Movimentação do Bispo (FOR) ===\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        // Bispo se move na diagonal superior direita (cima + direita)
        printf("Passo %d: CIMA + DIREITA\n", i);
    }

     // 
    // Torre - usando WHILE
    // 
    printf("\n=== Movimentação da Torre (WHILE) ===\n");
    int j = 1;
    while (j <= TORRE_MOV) {
        // Torre se move apenas para a direita
        printf("Passo %d: DIREITA\n", j);
        j++;
    }

    // 
    // Rainha - usando DO...WHILE
    // 
    printf("\n=== Movimentação da Rainha (DO...WHILE) ===\n");
    int k = 1;
    do {
        // Rainha se move apenas para a esquerda
        printf("Passo %d: ESQUERDA\n", k);
        k++;
    } while (k <= RAINHA_MOV);

    // Finalização do programa
    printf("\n=== Fim da Simulação ===\n");

    return 0;
}


