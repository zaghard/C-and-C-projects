#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//Funcao principal do progra,a
int main(void){
        //Responsável por alimenta o rand de forma diferente
        srand((unsigned)time(NULL));
        // Variável que recebe o resto da divisão do número por 3
        int aleatorio = rand() % 3;

        //imprime o valor
        printf("%d\n", aleatorio);

         // Variável que recebe o resto da divisão do número por 5
         int aleatorio1 = (rand() % 5) +1;
         //imprimindo o valor
         printf("%d\n", aleatorio1);







system("pause");
}
