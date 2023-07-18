#include <stdio.h>
#include <stdlib.h>

/*  Uma certa operadora de telefonia m�vel cobra R$ 5,00 mensais pelo seu plano b�sico de transmiss�o de SMS (mensagens de texto),
    sendo que taxas adicionais s�o cobradas conforme as regras abaixo:
        a. As primeiras 60 mensagens est�o inclu�das no plano b�sico;
        b. Se o usu�rio mandar mais de 60 mensagens, cada mensagem adicional custar� R$ 0.05, at� o limite de 180 mensagens;
        c. Acima de 180 mensagens, o valor de cada uma delas passa a R$ 0,10;
        d. A soma dos impostos estaduais e federais amonta a 12% do valor de cada fatura.
    Com base nessas informa��es, crie um algoritmo para ler o n�mero total de mensagens enviadas por um usu�rio.
    Ao final, calcule o valor da conta e mostre todos os dados, incluindo o valor da conta com e sem impostos. */

int main(int argc, char *argv[])
{
	int mensagens;
	float planomensal, imposto, valortotal;

	printf ("Informe a quantidade de mensagens enviadas: ");
	scanf ("%d", &mensagens);

	if (mensagens <= 60)
		planomensal = 5;
	if (mensagens > 60 && mensagens<= 180)
		planomensal = 5 + (mensagens * 0.05);
	if (mensagens > 180)
		planomensal = 5 + (mensagens * 0.10);

	imposto = planomensal * 12 / 100;
	valortotal = planomensal + imposto;

	printf ("O valor do plano sem impostos e de: %.2f \n", planomensal);
	printf ("O valor total com impostos aplicados: %.2f \n", valortotal);

	printf ("\nFim do sistema\n");
	return 0;
}
