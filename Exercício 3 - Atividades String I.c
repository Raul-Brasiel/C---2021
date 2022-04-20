#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char loja1[30], loja2[30], loja3[30];
	int valor1, valor2, valor3;
	
	printf("Digite o nome da loja 1: "); //loja 1
	gets(loja1);
	printf("Digite o valor do produto na loja 1: ");
	scanf("%d",&valor1);
	fflush(stdin);
	
	printf("\nDigite o nome da loja 2: "); //loja 2
	gets(loja2);
	printf("Digite o valor do produto na loja 2: ");
	scanf("%d",&valor2);
	fflush(stdin);
	
	printf("\nDigite o nome da loja 3: "); //loja 3
	gets(loja3);
	printf("Digite o valor do produto na loja 3: ");
	scanf("%d",&valor3);
	fflush(stdin);
	
	if(valor1<valor2 && valor1<valor3)
	{
		printf("\nProduto mais barato:\nLoja %s \nValor do Produto: %d",loja1,valor1);
	}
	if(valor2<valor1 && valor2<valor3)
	{
		printf("\nProduto mais barato:\nLoja %s \nValor do Produto: %d",loja2,valor2);
	}
	if(valor3<valor1 && valor3<valor2)
	{
		printf("\nProduto mais barato:\nLoja %s \nValor do Produto: %d",loja3,valor3);
	}
}
