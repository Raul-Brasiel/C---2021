#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char nome[50], endereco[70], telefone[16];
	int idade, i; 
	
	for(i=1;i<=10;i++)
	{
		printf("Digite o nome da pessoa: ");
		gets(nome);
		
		printf("Digite a idade dessa pessoa: ");
		scanf("%d",&idade);
		fflush(stdin);
		
		printf("Digite o endereco dessa pessoa: ");
		gets(endereco);
		
		printf("\nDigite o telefone dessa pessoa(use o padrao: (ddd)9****-****): ");
		scanf("%s",&telefone);
		fflush(stdin);
		
		printf("\nSeu nome eh %s, voce tem %d anos, mora na rua %s e seu telefone eh %s.\n\n",nome,idade,endereco,telefone);
	}
}
