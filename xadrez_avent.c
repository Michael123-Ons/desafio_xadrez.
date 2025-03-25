#include <stdio.h>

int main () {

    //definição das variáveis e números de casas de cada peça 
    int mov_torre;
    int mov_bispoCima, mov_bispoDireita;
    int mov_rainha;
    int mov_cavaloBaixo, mov_cavaloEsquerda;
    int i, j;

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
        printf("O Bispo se moveu para Cima.(%d)\n", i,  mov_bispoCima);
        printf("O Bispo se moveu para Direita.(%d)\n", i,  mov_bispoDireita);
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


    //Movimentação do Cavalo usando "for"
    printf("\nMovimentação do Cavalo:\n");
    for (i = 1; i <= 2; i++){
        mov_cavaloBaixo++;
        printf("O Cavalo se moveu duas casas para baixo.(%d)\n", i);
        for (j = 1; j <= 1; j++){
            mov_cavaloEsquerda++;
            printf("O Cavalo se moveu uma casa para a esquerda.(%d)\n", j);
        }   

    }
    

    //Movimentação do Cavalo usando "do-while"
    printf("\nMovimentação do Cavalo:\n");
    i = 1; //inicializa o contador externo
    do {
        mov_cavaloBaixo++;  //movimenta o cavalo para baixo
        printf("O Cavalo se moveu duas casas para baixo.(%d)\n", i);
       
        j = 1;  //inicializa o contador interno
        do {
            mov_cavaloEsquerda++;  //movimenta o cavalo para esquerda
            printf("O Cavalo se moveu uma casa para a esquerda.(%d)\n", j);
            j++;
        } while (j <= 1); //loop inteiro que executa apenas uma vez
       
        i++;
        
        } while (i <= 2);  //loop externo que executa duas vezes 
    


        return 0;

  
}    

