#include<stdio.h>
#include<stdlib.h>
/*Escreva um programa para ler o n�mero de lados de um pol�gono regular e a medida do lado(em cm). 
Se o n�mero de lados for igual a 3 escrever TRIANGULO e o valor da �rea. 
Se o n�mero de lados for igual a 4 escrever QUADRADO e o valor da sua �rea. Se o �mero de lados for igual a 5 escrever PENT�GONO.*/

int lados;
float lado1, lado2, base, altura, area;

void calcularTriangulo()
{
	printf("Escreva a altura do poligono\n");
	scanf("%f",&altura);
	
	printf("Escreva a base do poligono\n");
	scanf("%f",&base);
	
	area = base*altura;
	area = area/2;
	
	printf("Triangulo, com area igual a %.2f",area);
}
void calcularQuadrado()
{
	printf("Escreva o lado 1 do poligono\n");
	scanf("%f",&lado1);
	
	printf("Escreva o lado 2 do poligono\n");
	scanf("%f",&lado2);
	
	area = lado1*lado2;
	
	printf("Quadrado, com area igual a %.2f",area);
}
int main()
{
	printf("Digite o numero de lados do poligono:\n");
	scanf("%d",&lados);
	
	if(lados == 3)
	{
		calcularTriangulo();
	}
	if(lados == 4)
	{
		calcularQuadrado();
	}
	if(lados == 5)
	{
		printf("Pentagono");
	}
}
