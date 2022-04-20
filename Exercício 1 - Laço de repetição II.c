#include<stdio.h>
#include<stdlib.h>

int main()
{
	int acumulador = 0, i;
	
	for(i=10;i>2;i--)
	{
		printf("Valor: %d\n",i);
		
		acumulador=acumulador+i;
		
		if(acumulador != 10)
		{
			printf("A soma dos valores eh: %d\n\n",acumulador);
		}
		if(acumulador == 10)
		{
			printf("\n");
		}
	}

}
