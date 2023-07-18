#include <stdio.h>
#include <stdlib.h>

/*  Um certo petshop tamb�m funciona como um hotel para c�es. De acordo com a tabela de pre�os desse estabelecimento,
    a taxa semanal para hospedagem � de R$50.00 para c�es com menos de 8 kg, R$ 70.00 para c�es que pesem entre 8 e 15 kg,
    R$ 100.00 para c�es entre 15 e 40 kg e R$ 125.00 para c�es com mais de 40 kg. Construa um algoritmo que leia
    o RG do propriet�rio de um c�o, bem como o nome, ra�a, idade e peso desse c�o e, de posse desses dados, exiba um or�amento
    contendo todos os dados de entrada e o custo para hospedar o animal por uma semana. */

int main(int argc, char *argv[])
{
	int taxahospedagem, idade, rg;
	float pesodocao;
	char nomedocao[15], raca[15];

	printf ("Informe o RG do dono do cao: ");
	scanf ("%d", &rg);

	printf ("Informe o nome do cao: ");
	scanf ("%s", nomedocao);

	printf ("Informe a raca do cao: ");
	scanf ("%s", raca);

	printf ("Informe a idade do cao: ");
	scanf ("%d", &idade);

	printf ("Informe o peso do cao: ");
	scanf ("%f", &pesodocao);

	if (pesodocao < 8)
		taxahospedagem = 50;
	if (pesodocao >= 8 && pesodocao < 15)
		taxahospedagem = 70;
	if (pesodocao >= 15 && pesodocao <= 40)
		taxahospedagem = 100;
	if (pesodocao > 40)
		taxahospedagem = 125;

	printf ("\nRG do dono: %d \n", rg);
	printf ("Nome do Cao: %s \n", nomedocao);
	printf ("Raca do Cao: %s \n", raca);
	printf ("Idade do Cao: %d anos\n", idade);
	printf ("Peso do Cao: %.2f quilos\n", pesodocao);
	printf ("O valor total do orcamento e de: %d reais\n", taxahospedagem);

	printf ("\nFim do sistema \n");
	return 0;
}
