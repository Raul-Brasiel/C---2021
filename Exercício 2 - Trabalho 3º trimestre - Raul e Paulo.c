//Dupla: Paulo Henrique Marques Silva e Raul Castro Brasiel

#include<stdio.h>
#include<stdlib.h>

void verificarTriangulo(int n1, int n2, int n3)
{
	if(n1>n2-n3 && n1<n2+n3)
	{
		if(n1==n2 && n2==n3)
		{
			printf("\nTriangulo equilatero");
		}
		if(n1==n2 && n1!=n3 || n1!=n2 && n2==n3 || n1!=n2 && n1==n3)
		{
			printf("\nTriangulo isosceles");
		}
		if(n1!=n2 && n1!=n3 && n2!=n3)
		{
			printf("\nTriangulo escaleno");
		}
	}
	else
	{
		printf("\nNao eh possivel formar um triangulo com esses valores");
	}
}

int main()
{
	int x, y, z;
	
	printf("Digite os valores dos lados de um triangulo:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	verificarTriangulo(x,y,z);
}
