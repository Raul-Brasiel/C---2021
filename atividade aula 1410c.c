#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[5], i; 
	
	printf("Digite 5 valores:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&vet[i]);
		
		if(vet[i]%2==0)
		{
			printf("par\n");
		}
		else
		{
			printf("impar\n");
		}
	}
}
