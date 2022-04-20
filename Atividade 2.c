#include<stdio.h>
#include<stdlib.h>

int main()
{
	int forma;
	float produto, total, desconto;
	
	printf("Digite a forma de pagamento.\n");
	printf("1- A vista\n2- A prazo\n");
	scanf("%d",&forma);
	
	printf("Digite o valor do produto:\n");
	scanf("%f",&produto);
	
	switch (forma)
	{
		case 1:
			printf("O valor da compra eh %.2f",produto);
			break;
		case 2:
			desconto=0.1*produto;
			
			total=produto-desconto;
			
			printf("O valor da compra eh %.2f",total);
			break;
		default:
			printf("Forma de pagamento invalida. Digite 1 ou 2.");
	}
}
