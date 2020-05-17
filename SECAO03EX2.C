#include<stdio.h>
#include<stdlib.h>


int main(){
	int qtmin, qtmax;
	float est_medio;

    printf("\nInforme a quantidade minima: ");
	scanf ("%d", qtmin);

	printf ("\nInforme a quantidade maxima: ");
	scanf ("%d", qtmax);

	est_medio = (qtmin +qtmax)/2;

	printf("\nOEstoque médio é %f: ",est_medio);


	system("PAUSE");
}

