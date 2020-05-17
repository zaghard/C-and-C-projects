#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

 int main(void)
 {

        //Definindo variaveis
        int  a , b ;
        float c ;
        char d;
        bool f;

        a = 5;
        c =2.5;
       d = '  L';
       f = true // true = 1, false = 0.

        //Escrevendo valores

         printf ("\nO valor de a = %d" , a);

        printf("\n Digite o primeiro valor:  ");

        scanf("%d" , &b );
        printf("digite o segundo valor, sendo esse numero decimal:  ");

        scanf("%f" , &c );


        printf("\nO valor de b eh = %d\n" , b);
        printf("\nO valor de c eh = %.1f\n" , c);
        printf("\n O valor de d eh = %c\n", d);
        printf("\n");
        printf("\n O valor de f eh = %d", f);

        //Pausando
        system("pause") ;


}
