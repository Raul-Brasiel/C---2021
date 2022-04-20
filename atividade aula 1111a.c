#include<stdio.h>
#include<stdlib.h>

	int valor1, valor2, soma;
		
void fazersoma()
{
	soma=valor1+valor2;
	
	printf("A soma dos valores eh %d",soma);
}

int main()
{		
	printf("Digite um valor:\n");
	scanf("%d",&valor1);
	
	printf("Digite um valor:\n");
	scanf("%d",&valor2);
	
	fazersoma();
}
