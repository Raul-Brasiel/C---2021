#include<stdio.h>
#include<stdlib.h>

int main()
{
	int angulo1, angulo2, angulo3;
	
	printf("Escreva o valor dos angulos do triangulo.\nPrimeiro angulo:\n");
	scanf("%d",&angulo1);
	
	printf("Segundo angulo:\n");
	scanf("%d",&angulo2);
	
	printf("Terceiro angulo:\n");
	scanf("%d",&angulo3);
	
	if(angulo1==90 && angulo2!=90 && angulo2!=90 || angulo1!=90 && angulo2==90 && angulo3!=90 || angulo1!=90 && angulo2!=90 && angulo3==90)
	{
		printf("Este triangulo eh retangulo.");
	}
	if(angulo1>90 && angulo2<90 && angulo2<90 || angulo1<90 && angulo2>90 && angulo3<90 || angulo1<90 && angulo2<90 && angulo3>90)
	{
		printf("Este triangulo eh obtusangulo.");
	}
	if(angulo1<90 && angulo2<90 && angulo3<90)
	{
		printf("Este triangulo eh acutangulo.");
	}
}
