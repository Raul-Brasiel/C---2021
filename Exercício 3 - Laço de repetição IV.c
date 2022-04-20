#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, cont, i;
	
	printf("Informe 30 numeros a baixo.\n\n");
	
	for(i=1;i<=30;i++)
	{
		printf("Digite1 um numero: ");
		scanf("%d",&num);
		
		if(num > 30)
		{
			cont++;
		}
	}
	
	printf("Numeros maiores que 30 digitados: %d",cont);
}
