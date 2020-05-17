#include<stdio.h>
#include<stdlib.h>


int main(){
	int num1, num2, soma, multp;

	printf("\n Digite o primeiro numero: ");
	scanf("%d", &num1);

	printf("\n Digite o segundo numero: ");
	scanf("%d", &num2);
//Processamento
	soma = num1 + num2;
	multp = soma * num1;
//Saida
	printf("\nO Resultado da operacao eh: %d", multp);


}

