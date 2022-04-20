#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i;
	
	printf("Tabuada do numero 5:\n\n");
	
	for(i=0;i<11;i++)
	{
		num = i*5;
		
		printf("5 x %d = %d\n",i,num);
	}
}
