#include<stdio.h>
#include<stdlib.h>

int main()
{
	float lado1, lado2, lado3;
	
	printf("Escreva o valor dos lados do triangulo.\nPrimeiro lado:\n");
	scanf("%d",&lado1);
	
	printf("Segundo lado:\n");
	scanf("%d",&lado2);
	
	printf("Terceiro lado:\n");
	scanf("%d",&lado3);
	
	if(lado1==lado2 && lado2==lado3)
	{
		printf("Este triangulo eh equilatero.");
	}
	if(lado1==lado2 && lado2!=lado3 || lado1==lado3 && lado2!=lado1)
	{
		printf("Este triangulo eh isoscele.");
	}
	if(lado1!=lado2 && lado2!=lado3)
	{
		printf("Este triangulo eh escaleno.");
	}
	else
	{
		printf("Nao forma um triangulo");
	}
}
