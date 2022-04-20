#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2, opcao, total;
	float div;
	
	printf("Digite 2 numeros. \nPrimeiro numero:\n");
	scanf("%d",&num1);
	
	printf("Segundo numero:\n");
	scanf("%d",&num2);
	
	printf("Agora escolha uma opcao:\n1- Media entre os numeros digitados\n2- Diferenca entre os números\n3- Produtos entre os números digitados\n4- Divisão do primeiro pelo segundo\n");
	scanf("%d",&opcao);
	
	switch (opcao)
	{
		case 1:
			total=(num1+num2)/2;
			printf("A media eh %d",total);
			break;
		case 2:
			total=num1-num2;
			printf("A diferenca entre eles eh %d",total);
			break;
		case 3:
			total=num1*num2;
			printf("O produto eh %d",total);
			break;
		case 4:
			div=num1/num2;
			printf("A divisao resulta em %.2f",div);
			break;
		default:
			printf("Opcao invalida.");
	}
}
