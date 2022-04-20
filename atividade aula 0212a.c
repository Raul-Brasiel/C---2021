#include<stdio.h>
#include<stdlib.h>
/*Crie um programa que tenha uma função que receba três valores, 'a', 'b' e 'c',
que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'*/

float calcularDelta(float a, float b, float c)
{
	float delta;
	
	delta = (b*b)-4*(a*c);
	
	return delta;
}

int main()
{
	float a, b, c, delta;
	
	printf("Digite 3 valores:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	delta = calcularDelta(a,b,c);
	
	printf("O delta eh %.2f",delta);
}
