#include <stdio.h>
#include <stdlib.h>

/* A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e
    depois exibir a área do terreno. */

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
