#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1,idade;
	
	printf("Digite a idade dos participantes para ver se podera entrar ou nao na festa.\n");
	
	while(i<=15)
	{
		printf("\nParticipante %d: ",i);
		scanf("%d",&idade);
		
		if(idade<16)
		{
			printf("Entrada proibida\n");
		}
		if(idade>=16 && idade<18)
		{
			printf("Entrada somente com responsavel\n");
		}
		if(idade>=18)
		{
			printf("Entrada permitida\n");
		}
		
		i++;
	}
}
