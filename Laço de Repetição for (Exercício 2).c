#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2, i;
	float divisao;
	
	for(i=0;i<8;i++)
	{
		printf("Digite um numero:\n");
		scanf("%d",&n1);
		
		printf("Digite outro numero:\n");
		scanf("%d",&n2);
		
		divisao = n1/n2;
		
		printf("A divisao resulta em %.2f.\n\n",divisao);
	}
}
