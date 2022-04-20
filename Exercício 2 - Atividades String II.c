#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char palavra[20], palavra2[20];
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	strcpy(palavra2, palavra);
	
	printf("%s",palavra2);
}
