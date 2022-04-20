#include<stdio.h>
#include<stdlib.h>
int somaPar=0, somaImpar=0;

void somarNumeros(int num)
{
	if(num<1000)
	{
		if(num%2==0)
		{
			somaPar = somaPar+num;
		}
		else
		{
			somaImpar = somaImpar+num;
		}
	}
	
}

int main()
{
	int valor;
	
	while(valor<1000)
	{
		scanf("%d",&valor);
		
		somarNumeros(valor);
	}
	
	printf("Soma dos pares: %d\n",somaPar);
	printf("Soma dos impares: %d\n",somaImpar);
	
}
