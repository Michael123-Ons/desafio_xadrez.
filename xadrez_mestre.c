#include <stdio.h>

// Função recursiva para movimentação da Torre
void mov_torre(int casas) {
    if (casas == 0) return;
    printf("A Torre se moveu para a Direita. (%d)\n", casas);
    mov_torre(casas - 1);
}

// Função recursiva para movimentação da Rainha
void mov_rainha(int casas) {
    if (casas == 0) return;
    printf("A Rainha se moveu para a Esquerda. (%d)\n", casas);
    mov_rainha(casas - 1);
}

// Função recursiva para movimentação do Bispo
void mov_bispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("O Bispo se moveu para Cima. (%d)\n", casas);
    printf("O Bispo se moveu para Direita. (%d)\n", casas);
    mov_bispoRecursivo(casas - 1);
}

// Movimentação do Bispo usando loops aninhados
void mov_bispoLoop(int casas) {
    printf("\nMovimentação do Bispo (Usando Loops Aninhados):\n");
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) { // Loop interno para representar o deslocamento horizontal
            printf("O Bispo se moveu para Cima. (%d)\n", i);
            printf("O Bispo se moveu para Direita. (%d)\n", i);
        }
    }
}

// Movimentação do Cavalo usando loops aninhados e controle de fluxo
void mov_Cavalo() {
    printf("\nMovimentação do Cavalo (Usando Loops Complexos):\n");
    int mov_cavaloCima = 0, mov_cavaloDireita = 0;
    for (int i = 1; i <= 2; i++) { // Move duas casas para cima
        mov_cavaloCima++;
        printf("O Cavalo se moveu para Cima. (%d)\n", mov_cavaloCima);
    }
    for (int j = 1; j <= 1; j++) { // Move uma casa para a direita
        mov_cavaloDireita++;
        printf("O Cavalo se moveu para Direita. (%d)\n", mov_cavaloDireita);
    }
}

int main() {
    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    mov_torre(5);

    // Movimentação do Bispo (Recursivo)
    printf("\nMovimentação do Bispo (Recursivo):\n");
    mov_bispoRecursivo(5);

    // Movimentação do Bispo (Loops Aninhados)
    mov_bispoLoop(5);
    
    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    mov_rainha(8);

    // Movimentação do Cavalo
    mov_Cavalo();

    return 0;
}
