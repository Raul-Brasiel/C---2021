#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[10], i;
	
	printf("Digite 10 valores:\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&vet[i]);
	}
	
	for(i=9;i>=0;i--)
	{
		printf("%d\n",vet[i]);
	}
}
