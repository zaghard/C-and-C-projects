#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    //Definindo variavess
    float  nota1, nota2, nota3, media;

    printf ("Digite a primeira nota:  ");
    scanf("%f",&nota1);

    printf("\nDigite a segunda nota nota:  ");
    scanf("%f", &nota2);
    printf("\n Digite a terceira nota:  ");

    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("\nA media do aluno  foi: %f ",media);

    if(media > 7){
        printf("\n\no Aluno foi Aprovado!!");
    }else{
        printf("\n\nO Aluno foi reprovado!\n");
    }








system( "PAUSE");
}
