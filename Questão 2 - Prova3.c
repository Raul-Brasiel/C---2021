#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, vet[15];
	
	printf("Digite 15 valores:\n");
	
	for(i=0;i<15;i++)
	{
		scanf("%d\n",&vet[i]);
	}
	
	printf("\nVetores pares:\n");
	
	for(i=0;i<15;i++)
	{
		if(i%2==0 && i!=0)
		{
			printf("Vetor %d: %d\n",i,vet[i]);
		}
	}
}
