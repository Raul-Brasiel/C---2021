#include<stdio.h>
#include<stdlib.h>
/*Crie um programa que tenha uma fun��o que receba tr�s valores, 'a', 'b' e 'c',
que s�o os coeficientes de uma equa��o do segundo grau e retorne o valor do delta, que � dado por 'b� - 4ac'*/

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
