#include<stdio.h>
#include<stdlib.h>

	int valor1, valor2, valor3, valor4;

int main()
{
	printf("Bem vindo! Vou coletar 4 numeros.\n\n");
	
	printf("Primeiro numero:\n");
	scanf("%d",&valor1);
	
	printf("Segundo numero:\n");
	scanf("%d",&valor2);
	
	printf("Terceiro numero:\n");
	scanf("%d",&valor3);
	
	printf("Quarto numero:\n");
	scanf("%d",&valor4);
	
	printf("\nNumeros escolhidos:\n");
	printf("Primeiro: %d\n",valor1);
	printf("Segundo: %d\n",valor2);
	printf("Terceiro: %d\n",valor3);
	printf("Quarto: %d\n",valor4);
}
