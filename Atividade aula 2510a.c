#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int i, vet1[10], vet2[10], vet3[10], soma, soma2, soma3;
	
	printf("Digite 10 valores para cada variavel\n\n");
	
	for(i=0;i<10;i++)
	{
		printf("Vetor %d da primeira variavel: ",i);
		scanf("%f",&vet1[i]);
		
		if(i%2==0)
		{
			soma=soma+vet1[i];
		}
	}
	
	printf("Soma dos vetores pares eh igual a %.2f\n\n",soma);
	
	for(i=0;i<10;i++)
	{
		printf("Vetor %d da segunda variavel: ",i);
		scanf("%f",&vet2[i]);
		
		if(i%2!=0)
		{
			soma2=soma2+vet2[i];
		}
	}
	
	printf("Soma dos vetores impares eh igual a %.2f\n\n",soma2);
	
	for(i=0;i<10;i++)
	{
		printf("Vetor %d da terceira variavel: ",i);
		scanf("%f",&vet3[i]);
		
		if(vet3[i]%5==0)
		{
			soma3=soma3+vet3[i];
		}
	}
	
	printf("Soma dos vetores multiplos de 5 eh igual a %.2f\n\n",soma3);
}
