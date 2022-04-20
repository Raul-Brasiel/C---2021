#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int num1, num2;

	printf("Escreva dois numeros diferentes.\nPrimeiro numero:\n");
	scanf("%d",&num1);
	
	printf("Segundo numero:\n");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("\n%d é maior.",num1);
	}
	else(num2>num1);
	{
		printf("\n%d eh maior.",num2);
	}
}
