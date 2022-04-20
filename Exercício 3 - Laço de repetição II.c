#include<stdio.h>
#include<stdlib.h>

int main()
{
	int resto2, resto3, resto5, i, contDois=0, contTres=0, contCinco=0;
	
	for(i=1;i<=100;i++)
	{
		resto2=i%2;
		
		if(resto2==0)
		{
			contDois++;
		}
		
		resto3=i%3;

		if(resto3==0)
		{
			contTres++;
		}
	
		resto5=i%5;
		
		if(resto5==0)
		{
			contCinco++;
		}
	}
	
	printf("%d numeros multiplos de 2.\n",contDois);
	printf("%d numeros multiplos de 3.\n",contTres);
	printf("%d numeros multiplos de 5.",contCinco);
}
