#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[15], i;
	
	printf("Digite 15 numeros:\n");
	
	for(i=0;i<15;i++)
	{
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<15;i++)
	{
		printf("Vetor %d: %d\n",i,vet[i]);
	}
	
}
