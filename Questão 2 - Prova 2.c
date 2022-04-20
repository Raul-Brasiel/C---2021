#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, a = 0, cont = 0;
	
	for(i=0;i<50;i++)
	{
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if(num > 0)
		{
			a = a + num;
		}
		if(num < 0)
		{
			cont++;
		}
	}
	
	printf("A soma dos numeros positivos digitados: %d. \nA quantidade de numeros negativos digitados: %d",a,cont);
}
