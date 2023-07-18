#include <stdio.h>
#include <stdlib.h>

/* A empresa Hipotheticus paga R$10 por hora normal trabalhada e R$15 por hora extra. Faça um algoritmo para calcular e imprimir
 o salário bruto e o salário líquido de um determinado funcionário.
 Considere que o salário líquido é igual ao salário bruto descontando-se 10% de impostos. */

int main(int argc, char *argv[])
{
	int horastrabalhadas, horasextras;
	float salariobruto, salarioliquido;

	printf ("Informe a quantidade de horas trabalhadas: ");
	scanf ("%d", &horastrabalhadas);

	printf ("Informe a quantidade de horas extras: ");
	scanf ("%d", &horasextras);

	horastrabalhadas = horastrabalhadas * 10;
	horasextras = horasextras * 15;

	salariobruto = horastrabalhadas + horasextras;
	salarioliquido = salariobruto - (salariobruto * 10 / 100);

	printf ("O valor do salario bruto e de: %.2f \n", salariobruto);
	printf ("O valor do salario liquido e de: %.2f \n", salarioliquido);

	printf ("\nFim do sistema\n");
	return 0;
}
