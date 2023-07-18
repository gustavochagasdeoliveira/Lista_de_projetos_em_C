#include <stdio.h>
#include <stdlib.h>

/* Um brechó revende produtos usados, e fixa o preço de venda de cada produto conforme o valor de sua aquisição: se o preço de aquisição
    de um produto é menor do que R$ 50.00, ele deve ser vendido por um preço 45% maior; caso contrário, o lucro será de 30%.
    Sabendo disso, construa um algoritmo que leia o valor de aquisição de um produto e mostre o seu valor de venda. */

int main(int argc, char *argv[])
{
	float valoraquisicao, valorvenda;

	printf ("Informe o valor da aquisicao do produto: ");
	scanf ("%f", &valoraquisicao);

	if (valoraquisicao < 50)
		valorvenda = valoraquisicao + (valoraquisicao * 45 /100);
	else
		valorvenda = valoraquisicao + (valoraquisicao * 30 /100);

	printf("O valor de venda desse produto e de: %.2f \n", valorvenda);

	printf ("\nFim do sistema \n");
	return 0;
}
