#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1, num, cont = 0;
	
	printf("Digite 10 numeros:\n");
	
	do{
		printf("\nValor %d: ",i);
		scanf("%d",&num);
		
		if(num>=30 && num<=70)
		{
			cont++;
		}
		
		i++;
	}while(i<=10);
	
	printf("\nEstao no intervalo entre 30 e 70: %d numeros",cont);
}
