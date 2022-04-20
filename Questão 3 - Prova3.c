#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, vet[20], cont = 0, cont2 = 0;
	
	printf("Digite 20 valores:\n");
	
	for(i=0;i<20;i++)
	{
		scanf("%d\n",&vet[i]);
		
		if(vet[i]==10)
		{
			cont++;
		}
		if(vet[i]==20)
		{
			cont2++;
		}
	}
	
	printf("O numero 10 foi digitado %d vezes. E o numero 20 foi digitado %d vezes.",cont,cont2);
}
