#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade, dias;
	
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
	dias=idade*365;
	printf("\nSua idade em dias: %d",dias);
}
