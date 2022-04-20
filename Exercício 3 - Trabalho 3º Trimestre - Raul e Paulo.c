//Dupla: Paulo Henrique Marques Silva e Raul Castro Brasiel

#include<stdio.h>
#include<stdlib.h>

int verificar(int n)
{
	int i, a = 0;
	
	for(i=2;i<=n/2;i++) 
	{
   		if (n%i==0) 
		{
       		a++;
    	}
 	}
 	
 	if(a==0)
 	{
 		if(n == 1)
		 {
		 	printf("\nNao eh primo.");
		 }
 		else
 		{
 			printf("\nEh primo.");
		}
	}
	else
	{
		printf("\nNao eh primo.");
	}
}

int main()
{
	int n;
	
	printf("Digite um numero:\n");
	scanf("%d",&n);
	
	verificar(n);
}
