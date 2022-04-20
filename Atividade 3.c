#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	
	printf("Digite o codigo do produto:\n");
	scanf("%d",&num);
	
	switch (num)
	{
		case 1:
			printf("Alimento nao-perecivel");
			break;
		case 2:
			printf("Alimento perecivel");
			break;
		case 3:
			printf("Alimento perecivel");
			break;
		case 4:
			printf("Alimento perecivel");
			break;
		case 5:
			printf("Vestuario");
			break;
		case 6:
			printf("Vestuario");
			break;
		case 7:
			printf("Higiene Pessoal");
			break;
		case 8:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 9:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 10:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 11:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 12:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 13:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 14:
			printf("Limpeza e Utensílios Domésticos");
			break;
		case 15:
			printf("Limpeza e Utensílios Domésticos");
			break;
		default:
			printf("Codigo invalido.");
	}
}
