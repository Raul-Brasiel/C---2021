#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char vogal[2];
	int comp1, comp2, comp3, comp4, comp5;
	
	printf("Digite uma vogal: \n");
	gets(vogal);
	
	comp1 = strcmp(vogal,"A");
	comp2 = strcmp(vogal,"E");
	comp3 = strcmp(vogal,"I");
	comp4 = strcmp(vogal,"O");
	comp5 = strcmp(vogal,"U");
	
	if(comp1 == 0)
	{
		printf("Amizade");	
	}
	if(comp2 == 0)
	{
		printf("Empolgado");	
	}
	if(comp3 == 0)
	{
		printf("Idoso");	
	}
	if(comp4 == 0)
	{
		printf("Ontem");	
	}
	if(comp5 == 0)
	{
		printf("Urso");	
	}
}
