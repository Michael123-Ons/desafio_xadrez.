#include <stdio.h>

int main () {

    //Definição das variáveis e números de casas de cada peça 
    int mov_torre;
    int mov_bispoCima, mov_bispoDireita;
    int mov_rainha;
    int i;

    //Movimentação da torre usando "for"
    printf("\nMovimentação da Torre:\n");
    for (i = 1; i <= 5; i++){
        mov_torre++; //move a torre para a direita
        printf("A Torre se moveu para a Direita.(%d)\n", i);
    }
    

    //Movimentação do bispo usando "while"
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        mov_bispoCima++; //move para cima
        mov_bispoDireita++; //move para direita
        printf("O Bispo se moveu para Cima e Direita.(%d)\n", i);
        i++;
    }

    //Movimentação da rainha usando "do-while"
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        mov_rainha++; //move para esquerda
        printf("A Rainha se moveu para a esquerda.(%d)\n", i);
        i++;
    } while (i <= 8);



    return 0;
}    

