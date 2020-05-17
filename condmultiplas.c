#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){
        //Definindo variaveis
        int a = 10;

        //Conectivo Lógico E (And)
        if ( a > 5 && a < 15){
            printf("\n A variavel 'a' esta entre 5 e 15\n");

            //Se uma comparação for falsa não entra no bloco de código
        }
        //Conectivo Lógico ou (OR), se uma comparação for verdadeira ja entra no bloco de código.

        if( a > 5 || a > 15){
            printf("\nA Variavel 'a' eh maior que 5 ou 15\n");
        }

        //Misturando conetivos

        if ( (a > 5 && a > 15) || a==20){
            printf("\nA variavel 'a' esta entre 5 e 15 ou eh 20\n");
        }


system("pause");
}




