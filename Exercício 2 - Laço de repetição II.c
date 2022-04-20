#include<stdio.h>
#include<stdlib.h>

int main()
{
	int acumulador = 0, i, valor;
	
	printf("Escreva um numero:\n");
	scanf("%d",&valor);
	
	for(i=1;i<=valor;i++)
	{
		acumulador = acumulador + i;
	}
	
	printf("A soma dos numeros entre 1 e %d resulta em: %d",valor,acumulador);
}
