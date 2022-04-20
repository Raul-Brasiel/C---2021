#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[3], produto;
	
	printf("Digite um numero: ");
	scanf("%d",&vet[0]);
	
	printf("Digite um numero: ");
	scanf("%d",&vet[1]);
	
	printf("Digite um numero: ");
	scanf("%d",&vet[2]);
	
	produto = vet[0] * vet[1] * vet[2];
	
	printf("\nProduto dos 3 valores eh: %d",produto);
}
