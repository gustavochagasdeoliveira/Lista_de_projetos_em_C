#include <stdio.h>
#include <stdlib.h>

/* A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as dimens�es de um terreno e
    depois exibir a �rea do terreno. */

int main(int argc, char *argv[])
{
	float comprimento, largura, area;

	printf ("Informe o comprimento do terreno: ");
	scanf ("%f", &comprimento);

	printf ("Informe a largura do terreno ");
	scanf ("%f", &largura);

	area = comprimento * largura;

	printf ("A area do terreno e de: %.2f \n", area);
    printf ("\nFim do sistema\n");
	return 0;
}
