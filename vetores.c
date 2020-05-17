#include<stdio.h>
#include<stdlib.h>
#define TAM 3


int main(void){
    int vetor [3], cont;
    //Passando valores para os vetores
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] =15;

    //Exibindo os valores dos vetores;
    printf("\nPosicao 0: %d", vetor[0] );
    printf("\nPosicao 1: %d", vetor[1] );
    printf("\nPosicao 2: %d\n", vetor[2] );

    for(cont =0; cont < TAM;cont ++){
        printf("\n Posicao %d :%d", cont, vetor[cont] );
        vetor[cont] = vetor[cont] +1;

    }











system("pause");
}
