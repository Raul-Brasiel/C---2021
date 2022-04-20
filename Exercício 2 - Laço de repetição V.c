#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1, idade, cont = 0;
	
	printf("Digite a idade de 15 pessoas:\n");
	
	while(i<=15)
	{
		printf("\nPessoa %d: ",i);
		scanf("%d",&idade);
		
		if(idade>20)
		{
			cont++;
		}
		
		i++;
	}
	
	printf("\nDas 15 pessoas, %d tem idade maior que 20.",cont);
}
