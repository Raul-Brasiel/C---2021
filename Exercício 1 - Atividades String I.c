#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char nome[50], sexo[10];
	int idade, comparacao, comparacao2;
	
	printf("Digite seu nome:\n");
	gets(nome);
	
	printf("Digite seu sexo\n");
	gets(sexo);
	
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	fflush(stdin);
	
	comparacao = strcmp(sexo,"feminino");
	comparacao2 = strcmp(sexo,"Feminino");
	
	if(comparacao == 0 || comparacao2 == 0 && idade < 25)
	{
		printf("%s - ACEITA",nome);
	}
	else
	{
		printf("%s - NAO ACEITA",nome);
	}
}
