#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
Infantil A = 5-7 anos;
Infantil B = 8-10 anos;
Juvenil A = 11-13 anos;
Juvenil B = 14-17 anos;
Adulto = 18 ou mais*/

int main(int argc, char *argv[]) {
	int idade;

	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);

	if(idade >=5 && idade <=7)
		printf("A categoria correspondente e Infantil A\n");

	if(idade >=8 && idade<=10)
		printf("A categoria correspondente e Infantil B\n");

	if(idade >=11 && idade<=13)
		printf("A categoria correspondente e Juvenil A\n");

	if(idade >=14 && idade<=17)
		printf("A categoria correspondente e Juvenil B\n");

	if(idade >=18)
		printf("A categoria correspondente e Adulto\n");

	if(idade <5)
		printf("Idade Invalida \n");

	printf("Fim do sistema\n");
	return 0;
}
