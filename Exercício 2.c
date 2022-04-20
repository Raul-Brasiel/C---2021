#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade;
	
	printf("Digite sua idade em anos:\n");
	scanf("%d",&idade);
	
	if(idade>17)
	{
		printf("Voce pode votar este ano.");
	}
	else
	{
		printf("Voce nao pode votar este ano");	
	}
	
}
