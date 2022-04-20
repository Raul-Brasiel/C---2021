#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2, num3;
	
	printf("Escreva 3 numeros diferentes.\nPrimeiro numero:\n");
	scanf("%d",&num1);
	
	printf("Segundo numero:\n");
	scanf("%d",&num2);
	
	printf("Terceiro numero:\n");
	scanf("%d",&num3);
	
	if(num1<num2 && num2<num3)
	{
		printf("\nOrdem crescente: %d, %d e %d",num1,num2,num3);
	}
	if(num1<num3 && num3<num2)
	{
		printf("\nOrdem crescente: %d, %d e %d",num1,num3,num2);
	}
	if(num3<num2 && num2<num1)
	{
		printf("\nOrdem crescente: %d, %d e %d",num3,num2,num1);
	}
	if(num2<num3 && num3<num1)
	{
		printf("\nOrdem crescente: %d, %d e %d",num2,num3,num1);
	}
	if(num2<num1 && num1<num3)
	{
		printf("\nOrdem crescente: %d, %d e %d",num2,num1,num3);
	}
	if(num3<num1 && num1<num2)
	{
		printf("\nOrdem crescente: %d, %d e %d",num3,num1,num2);
	}
}
