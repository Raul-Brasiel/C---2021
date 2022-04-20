#include<stdio.h>
#include<stdlib.h>
/*Faça um algoritmo que calcule o valor da conta de luz de uma pessoa. 
Sabe-se que o cálculo da conta de luz segue a tabela abaixo:

Tipo de Cliente      Valor do KW/h
1 (Residência)       0,60
2 (Comércio)         0,48
3 (Indústria)        1,29 */

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
