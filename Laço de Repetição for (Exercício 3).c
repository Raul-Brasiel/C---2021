#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2, n3, n4, n5, n6, media, i;
	
	for(i=0;i<5;i++)
	{
		printf("Digite o primeiro numero:\n");
		scanf("%d",&n1);
		
		printf("Digite o segundo numero:\n");
		scanf("%d",&n2);
		
		printf("Digite o terceiro numero:\n");
		scanf("%d",&n3);
		
		printf("Digite o quarto numero:\n");
		scanf("%d",&n4);
		
		printf("Digite o quinto numero:\n");
		scanf("%d",&n5);
		
		printf("Digite o sexto numero:\n");
		scanf("%d",&n6);
		
		media = (n1+n2+n3+n4+n5+n6)/6;
		
		printf("A media eh %d\n\n",media);
	}
}
