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
		printf("\nO maior numero eh %d.",num3);
	}
	if(num1<num3 && num3<num2)
	{
		printf("\nO maior numero eh %d.",num2);
	}
	if(num3<num2 && num2<num1)
	{
		printf("\nO maior numero eh %d.",num1);
	}
	if(num2<num3 && num3<num1)
	{
		printf("\nO maior numero eh %d.",num1);
	}
	if(num2<num1 && num1<num3)
	{
		printf("\nO maior numero eh %d.",num3);
	}
	if(num3<num1 && num1<num2)
	{
		printf("\nO maior numero eh %d.",num2);
	}
}
