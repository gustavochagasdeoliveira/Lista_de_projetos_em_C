#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo. */

int main(int argc, char *argv[]) {
	int number;

	printf("Digite um valor: ");
	scanf("%d", &number);

	if(number %2 == 0) {
		printf("Par e ");
	} else {
		printf("Impar e ");
	}
	if(number >0 ) {
		printf("Positivo");
	} else {
		printf("Negativo");
	}

	return 0;
}
