#include<stdio.h>
#include<stdlib.h>
/*Faça um programa capaz de realizar diversas operações matemáticas. O usuário irá escolher qual operação deseja realizar de acordo com um menu apresentado.

1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
5 - Delta

Após escolher a operação, o usuário deve informar os valores necessário e o programa mostrar o resultado. Utilize função com passagem de parâmetro e retorno.*/

float somar(float num1, float num2, float num3)
{
	float total;
	
	total = num1+num2+num3;
	
	return total;
}
float subtrair(float num1, float num2, float num3)
{
	float total;
	
	total = (num1-num2)-num3;
	
	return total;
}
float multiplicar(float num1, float num2, float num3)
{
	float total;
	
	total = (num1*num2)*num3;
	
	return total;
}
float dividir(float num1, float num2, float num3)
{
	float total;
	
	total = (num1/num2)/num3;
	
	return total;
}
float delta(float num1, float num2, float num3)
{
	float total;
	
	total = (num2*num2)-4*(num1*num3);
	
	return total;
}

int main()
{
	int escolha;
	float num1, num2, num3, total;
	
	printf("Digite o numero referente a operacao:\n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir \n5 - Delta\n");
	scanf("%d",&escolha);
	
	if(escolha == 1)
	{
		printf("Digite 3 valores:\n");
		scanf("%f",&num1);
		scanf("%f",&num2);
		scanf("%f",&num3);
		
		total = somar(num1,num2,num3);
	}
	if(escolha == 2)
	{
		printf("Digite 3 valores:\n");
		scanf("%f",&num1);
		scanf("%f",&num2);
		scanf("%f",&num3);
		
		total = subtrair(num1,num2,num3);
	}
	if(escolha == 3)
	{
		printf("Digite 3 valores:\n");
		scanf("%f",&num1);
		scanf("%f",&num2);
		scanf("%f",&num3);
		
		total = multiplicar(num1,num2,num3);
	}
	if(escolha == 4)
	{
		printf("Digite 3 valores:\n");
		scanf("%f",&num1);
		scanf("%f",&num2);
		scanf("%f",&num3);
		
		total = dividir(num1,num2,num3);
	}
	if(escolha == 5)
	{
		printf("Digite os valores a, b e c:\n");
		scanf("%f",&num1);
		scanf("%f",&num2);
		scanf("%f",&num3);
		
		total = delta(num1,num2,num3);
	}
	
	printf("A a operacao dos valores eh %.2f",total);
}
