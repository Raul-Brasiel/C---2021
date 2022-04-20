#include<stdio.h>
#include<stdlib.h>
/*Escreva um programa para ler o número de lados de um polígono regular e a medida do lado(em cm). 
Se o número de lados for igual a 3 escrever TRIANGULO e o valor da área. 
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área. Se o úmero de lados for igual a 5 escrever PENTÁGONO.*/

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
