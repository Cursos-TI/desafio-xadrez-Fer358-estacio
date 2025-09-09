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

    


