#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	
	printf("Numeros divisiveis por 11 e com resto 5:\n\n");
	
	for(i=1000;i<=2000;i++)
	{
		if(i%11 == 5)
		{
			printf("%d \n",i);
		}
	}
}
