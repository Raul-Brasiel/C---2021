#include<stdio.h>
#include<stdlib.h>

int main()
{
	int senha;
	
	printf("Digite a senha:\n");
	scanf("%d",&senha);
	
	if(senha==1234)
	{
		printf("\nAcesso permitido");
	}
	else
	{
		printf("\nAcesso negado");
	}
}
