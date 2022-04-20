#include<stdio.h>
#include<stdlib.h>

int senha;

void verificar()
{
	if(senha == 1234)
	{
		printf("ACESSO PERMITIDO");
	}
	else
	{
		printf("ACESSO NEGADO");
	}
}

int main()
{
	printf("Digite a senha:\n");
	scanf("%d",&senha);	
	
	verificar();
}
