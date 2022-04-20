#include<stdio.h>
#include<stdlib.h>

int main()
{
	float largura, altura, area, latas;
	
	printf("Escreva a largura da parede em metros:\n");
	scanf("%f",&largura);
	
	printf("Escreva a altura em metros:\n");
	scanf("%f",&altura);
	
	area=largura*altura;
	latas=(area*300)/2000;
	
	printf("\nLatas de tinta necessarias: %f",latas);
}
