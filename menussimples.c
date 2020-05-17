#include<stdio.h>
#include<stdlib.h>


int main(void){
    int opcao;


    //Confere e valida a opcao

    while (opcao <1 || opcao >3){

    //Interface de menu

    printf("\n Escolha uma opcao:\n");
    printf("1-Opcao, 1\n");
    printf("2-Opcao, 2\n");
    printf("3-Opcao, 3\n");


        //Lendo a Opcao
        scanf("%d\n",&opcao);

        switch(opcao){
        case 1:
            printf("\n Opcao 1 foi escolhida\n");
            break;

        case 2:
            printf("\n Opcao 2 foi escolhida\n");
            break;

        case 3:
            printf("\n Opcao 3 foi escolhida\n");
            break;
        default:
            printf("\n opcao Invalida\n");
            break;

        }

        }









system("pause");

}

