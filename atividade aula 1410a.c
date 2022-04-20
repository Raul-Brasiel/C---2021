#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[15], i;
	
	printf("Digite 15 valores:\n");
	
	for(i=0;i<15;i++)
	{
		scanf("%d",&vet[i]);
	}
	for(i=0;i<15;i++)
	{
		printf("Valor do vetor %d: %d\n",i,vet[i]);
	}
}
