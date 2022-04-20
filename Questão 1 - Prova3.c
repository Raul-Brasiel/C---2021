#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int tamanho1, tamanho2;
	char palavra1[20], palavra2[20];
	
	printf("Digite uma palavra: ");
	gets(palavra1);
	
	printf("Digite outra palavra: ");
	gets(palavra2);
	
	tamanho1 = strlen(palavra1);
	tamanho2 = strlen(palavra2);
	
	if(tamanho1>tamanho2)
	{
		printf("A palavra %s eh maior",palavra1);
	}
	if(tamanho2>tamanho1)
	{
		printf("A palavra %s eh maior",palavra2);
	}
}
