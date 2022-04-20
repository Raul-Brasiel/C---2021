#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, soma, num1, num2, vezes = 1, resposta;
	
	for(i=1;i<=2;i++)
	{
		printf("Digite um numero:\n");
		scanf("%d",&num1);
		
		printf("Digite outro numero:\n");
		scanf("%d",&num2);
		
		soma = num1 + num2;
		
		printf("\nA soma dos dois numeros resulta em %d.",soma);
		
		printf("\n\nNovo Calculo (Digite 1 para SIM e 2 para NAO)?\n");
		scanf("%d",&resposta);
		
		if(resposta == 1)
		{
			i = 1;
		}
		else
		{
			printf("\nFim dos Calculos.");
			i = 2;
		}
	}
}
