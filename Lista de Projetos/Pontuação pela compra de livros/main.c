#include <stdio.h>
#include <stdlib.h>

/*  O programa de fidelidade de uma determinada livraria premia seus clientes de acordo com o número de livros comprados a cada mês.
    Os pontos são atribuídos da seguinte forma:
    • Se um cliente comprar 0 livros, ele ganhará 0 pontos.
    • Se um cliente comprar 1 livro, ele ganhará 5 pontos.
    • Se um cliente comprar 2 livros, ele ganhará 15 pontos.
    • Se um cliente comprar 3 livros, ele ganhará 30 pontos.
    • Se um cliente comprar 4 ou mais livros, ele ganhará 60 pontos.
    Crie um algoritmo que leia o número de livros comprados por um usuário e exiba o número de pontos correspondentes.
 */

int main(int argc, char *argv[])
{
	int livroscomprados, pontos;

	printf("Informe a quantidade de livros comprados: ");
	scanf("%d", &livroscomprados);

	if (livroscomprados == 0)
		pontos == 0;
	if (livroscomprados == 1)
		pontos = 5;
	if (livroscomprados == 2)
		pontos = 15;
	if (livroscomprados == 3)
		pontos = 30;
	if (livroscomprados >= 4)
		pontos = 60;

	printf ("Esse mes voce fez %d pontos\n", pontos);

	printf ("\nFim do sistema\n");
	return 0;
}
