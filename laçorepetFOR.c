#include<stdio.h>
#include<stdlib.h>



int main(void){
    int cont;

    //Contando até 10 com FOR.
    for(cont =1; cont <= 10; cont++){

        printf("\n%d",cont);
    }
    //Tabuada
    for(cont=1; cont<= 10; cont++){
        printf("\n 5 X %d = %d ", cont, 5 * cont);
    }
//Contagem regressiva
    for(cont = 10; cont > 0; cont --){
    printf("\n%d ", cont);
    }



system("pause");
}
