#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que leia um n� inteiro e mostre uma mensagem indicando se este n�mero � par ou �mpar, e se � positivo ou negativo. */

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
