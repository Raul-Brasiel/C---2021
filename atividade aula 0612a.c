#include<stdio.h>
#include<stdlib.h>
// Faça um programa que receba do usuário um mês e mostre quantos dias aquele mês possui.

int verificarMes(int mes)
{
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
	{
		return 31;
	}
	if(mes==4 || mes==6 || mes==9 || mes==11)
	{
		return 30;
	}
	if(mes==2)
	{
		return 28;	
	}
}

int main()
{
	int mes, dias;
	
	printf("Digite o mes de 1 a 12:\n");
	scanf("%d",&mes);
	
	dias = verificarMes(mes);
	
	printf("O mes possui %d dias",dias);
}
