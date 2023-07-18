#include <stdio.h>
#include <stdlib.h>

/* Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para ler o valor total da conta
    e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos.
    Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe. */

int main(int argc, char *argv[])
{
	int carlos, andre;
	float felipe, valorconta;

	printf ("Informe o valor da conta: ");
	scanf ("%f", &valorconta);

	carlos = valorconta / 3;
	andre = valorconta / 3;
	felipe = valorconta - carlos - andre;

	printf ("O parte de cada um e de: \n");
	printf ("Carlos: %d \n", carlos);
	printf ("Andre: %d \n", andre);
	printf ("Felipe: %.2f \n", felipe);

	printf ("\nFim do sistema\n");
	return 0;
}
