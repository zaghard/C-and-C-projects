#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main(void){
   bool a = true, b = false;

   if(a==true){
    printf("\n A eh verdadeiro\n");
}
    if ( b ){

    printf("\n B eh verdadeiro\n");
}
    else{

        printf("\n B eh falso\n");
    }
    //Comparando uma Falsidade
    if(!b){
        printf("\n B eh falso\n");
    }



system("pause");
}
