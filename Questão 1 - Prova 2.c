#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,  i, resultado;
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
	printf("\nTabuada do numero %d:\n",num);
	
	for(i=0;i<=10;i++)
	{
		resultado = i * num;
		
		printf("%d x %d = %d\n",num,i,resultado);
	}
}
