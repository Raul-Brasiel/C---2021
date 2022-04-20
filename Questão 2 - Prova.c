#include<stdio.h>
#include<stdlib.h>

int main()
{
	float base, altura, area;
	
	printf("Digite a base do retangulo:\n");
	scanf("%f",&base);
	
	printf("Digite a altura:\n");
	scanf("%f",&altura);
	
	area=base*altura;
	
	printf("\nBase do retangulo: %f",base);
	printf("\nAltura do retangulo: %f",altura);
	printf("\nArea desse retangulo: %f\n",area);
}
