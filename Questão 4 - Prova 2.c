#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade, i, contma = 0, contme = 0;
	
	for(i=1;i<=15;i++)
	{
		printf("Digite a idade da pessoa %d: ",i);
		scanf("%d",&idade);
		
		if(idade < 18)
		{
			contme++;
		}
		if(idade == 18 || idade >18)
		{
			contma++;
		}
	}
	printf("\nNumero de pessoas menores de 18 anos: %d \nNumero de pessoas com ou maiores de 18 anos: %d",contme,contma);
}
