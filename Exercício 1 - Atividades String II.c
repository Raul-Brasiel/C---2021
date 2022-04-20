#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char nome[50], instituicao[5], cidade[20], estado[20];
	int idade, comp, cont = 0, i = 1, pessoas, cont2 = 0;
	float media;
	
	printf("Informe seu nome: ");
	gets(nome);
	
	printf("\nInforme sua instituicao de ensino: ");
	gets(instituicao);
	
	comp = strcmp(instituicao,"IFTM");
	
	if(comp == 0)
	{
		printf("\nCom quantas pessoas quer fazer media de idade? ");
		scanf("%d",&pessoas);
		fflush(stdin);
		
		while(i<=pessoas)
		{
			printf("\nInforme a cidade: ");
			gets(cidade);
		
			printf("Informe o estado: ");
			gets(estado);
		
			printf("Informe a idade: ");
			scanf("%d",&idade);
			fflush(stdin);
			
			strcat(cidade, estado);
			
			printf("Morador de %s \n",cidade);
			
			comp = strcmp(estado,"Minas Gerais");
			
			if(comp == 0)
			{
				cont = cont + idade;
				
				cont2++;	
			}
			
			i++;
		}
		
		media = cont/cont2;
		
		printf("\n\nMedia de idade dos moradores de Minas Gerais: %.2f anos",media);
	}
	else
	{
		printf("Acesso recusado!");
	}
}
