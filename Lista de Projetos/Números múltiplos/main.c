#include <stdio.h>
#include <stdlib.h>

/* Elaborar um algoritmo que l� 2 valores a e b e os escreve com a mensagem: "A � m�ltiplo de B" ou "A n�o � m�ltiplo de B". */

int main(int argc, char *argv[]) {
	int A, B;

	printf("Digite o valor de A: ");
	scanf("%d", &A);

	printf("Digite o valor de B: ");
	scanf("%d", &B);

	if(B % A == 0){
		printf("A e multiplo de B\n\n");
	} else {
		printf("A nao e multiplo de B\n\n");
	}
	printf ("Fim do sistema\n");
	return 0;
}
