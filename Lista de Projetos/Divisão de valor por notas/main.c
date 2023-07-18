#include <stdio.h>
#include <stdlib.h>

/*  Escrever um algoritmo que lê um valor em reais e calcula qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que
    o valor lido pode ser decomposto.
    Escrever o valor lido e a relação de notas necessárias. */

int main(int argc, char *argv[])
{
	int valor, notas100, notas50, notas10, notas5, notas1;

	printf ("Informe um valor em reais: ");
	scanf ("%d", &valor);

	notas100 = valor / 100;
	notas50 = valor / 50;
	notas10 = valor / 10;
	notas5  = valor / 5;
	notas1 = valor;

	printf ("Quantidade de notas necessarias: \n");
	printf ("Notas de 100: %d \n", notas100);
	printf ("Notas de 50: %d \n", notas50);
	printf ("Notas de 10: %d \n", notas10);
	printf ("Notas de 5: %d \n", notas5);
	printf ("Notas de 1: %d \n ", notas1);
	printf ("\nFim do sistema\n");

	return 0;
}
