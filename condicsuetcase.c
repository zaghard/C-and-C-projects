#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Definindo Variaveis
    int a = 1;
    char b = 'x';
//codigo ex
    if ( a == 2) {
            printf("\nOpcao escolhida eh a 1\n");

    }else if ( a == 2 ){
            printf("\nOpcao escolhida eh a 2\n");

    }else if(a == 3){
            printf("\nOpacao escolhida eh a 3\n");

    }else {
            printf("\n Opcao invalida\n");

    }
    switch (a){
        case 1:
            printf("\n Opcao escolhida: 1\n");
            break;

        case 2:
            printf("\n Opcao escolhida : 2\n");
            break;

        case 3:
            printf("\n Opcao escolhida: 3\n");
            break;

        default:
            printf("\n Opcao invalida\n");
                break;
    }


    switch(b){
           case 'x':
                 printf("\n A letra eh x\n");
           break;

          default:
                 printf("\n Opcao invalida\n");
          break;

}








system("pause");
}
