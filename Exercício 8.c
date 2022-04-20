#include<stdio.h>
#include<stdlib.h>

int main()
{
	float area, lados, valor; 
	
	printf("Digite o numero de lados do poligono:\n");
	scanf("%f",&lados);
	
	printf("Escreva o valor dos lados:\n");
	scanf("%f",&valor);
	
	if(lados==3)
	{
		area=valor*3;
		
		printf("O poligono eh um triangulo e sua area eh %.f.",area);
	}
	if(lados==4)
	{
		area=valor*4;
		
		printf("O poligono eh um quadrado e sua area eh %.f.",area);
	}
	if(lados==5)
	{
		area=valor*5;
		
		printf("O poligono eh um pentagono e sua area eh %.f.",area);
	}
	else
	{
		if(lados<3)
		{
			printf("Nao eh um poligono.");
		}
		if(lados>5)
		{
			printf("Poligono nao identificado.");
		}
	}
}
