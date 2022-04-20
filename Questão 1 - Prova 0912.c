#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que receba 30 números do usuário. 
A cada vez que for digitado um número entre 45 e 65 
escreva na tela "Viva Chile!". Utilize função.*/

void verificar(int n)
{
	if(n>45 && n<65)
	{
		printf("Viva Chile!\n");
	}
}

int main()
{
	int n, i;
	
	printf("Digite 30 numeros:\n");
	
	for(i=0;i<30;i++)
	{
		scanf("%d",&n);
		
		verificar(n);	
	}
}
