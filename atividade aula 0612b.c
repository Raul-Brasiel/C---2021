#include<stdio.h>
#include<stdlib.h>
/*Fa�a um algoritmo que calcule o valor da conta de luz de uma pessoa. 
Sabe-se que o c�lculo da conta de luz segue a tabela abaixo:

Tipo de Cliente      Valor do KW/h
1 (Resid�ncia)       0,60
2 (Com�rcio)         0,48
3 (Ind�stria)        1,29 */

float calcularConta(int cliente, float kw)
{
	float total;
	
	if(cliente==1)
	{
		total = kw*0.6;
	}
	if(cliente==2)
	{
		total = kw*0.48;
	}
	if(cliente==3)
	{
		total = kw*1.29;
	}
	
	return total;
}

int main()
{
	int cliente;
	float  kw, total;
	
	printf("Digite seu tipo de cliente: \n1- Residencia \n2- Comercio \n3- Industria\n");
	scanf("%d",&cliente);
	
	printf("Digite o KW/h gasto no mes:\n");
	scanf("%f",&kw);
	
	total = calcularConta(cliente,kw);
	
	printf("O total a pagar eh %.2f",total);
}
