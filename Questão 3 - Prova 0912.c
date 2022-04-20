#include<stdio.h>
#include<stdlib.h>

/*Receba do usu�rio 3 n�meros. Fa�a a m�dia e retorne o valor ao usu�rio. Utilize fun��o.*/

float calcularMedia(float n1, float n2, float n3)
{
	float total;
	
	total = (n1+n2+n3)/3;
	
	return total;
}

int main()
{
	float n1, n2, n3, total;
	
	printf("Digite 3 numeros:\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	
	total = calcularMedia(n1,n2,n3);
	
	printf("A media dos valores eh %.2f",total);
}