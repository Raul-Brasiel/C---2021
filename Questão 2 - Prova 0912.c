#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que receba a idade 8 pessoas. Calcule e mostre: 
A quantidade de pessoas com idade abaixo de 28 anos; 
Utilize função com passagem de parâmetro.*/

int verificarIdade(int idade, int cont)
{
	if(idade<28)
	{
		cont++;
	}	
	
	return cont;
}

int main()
{
	int idade, i, cont = 0;
	
	printf("Digite a idade de 8 pessoas:\n");
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&idade);
		
		cont = verificarIdade(idade,cont);
	}
	
	printf("Pessoas com idade abaixo de 28 anos: %d",cont);
}
