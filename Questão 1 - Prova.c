#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n1, n2, n3, n4, n5, media;
	
	printf("Digite um numero: \n");
	scanf("%f",&n1);
	
	printf("Digite um numero: \n");
	scanf("%f",&n2);
	
	printf("Digite um numero: \n");
	scanf("%f",&n3);
	
	printf("Digite um numero: \n");
	scanf("%f",&n4);
	
	printf("Digite um numero: \n");
	scanf("%f",&n5);
	
	media=(n1+n2+n3+n4+n5)/5;
	printf("Media dos 5 numeros: %f\n",media);
}
