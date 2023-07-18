#include <stdio.h>
#include <stdlib.h>

/*  Crie um algoritmo que leia um número entre 1 e 10 e exiba o correspondente em números romanos.
    Se o número estiver fora do intervalo de 1 a 10, uma mensagem de erro deverá ser exibida. */

int main(int argc, char *argv[])
{
	int numero;
	char *numeroromano;

	printf ("Digite um valor entre 1 e 10: ");
	scanf ("%d", &numero);

	if (numero < 1 || numero > 10) {
		printf("\Indisponivel \n");
	}
	if (numero == 1) {
        numeroromano = "I";
    } else if (numero == 2) {
        numeroromano = "II";
    } else if (numero == 3) {
        numeroromano = "III";
    } else if (numero == 4) {
        numeroromano = "IV";
    } else if (numero == 5) {
        numeroromano = "V";
    } else if (numero == 6) {
        numeroromano = "VI";
    } else if (numero == 7) {
        numeroromano = "VII";
    } else if (numero == 8) {
        numeroromano = "VIII";
    } else if (numero == 9) {
        numeroromano = "IX";
    } else if (numero == 10) {
        numeroromano = "X";
    }

	printf ("O correspondente em Romanos e: %s \n", numeroromano);

	printf ("\nFim do sistema \n");
	return 0;
}
