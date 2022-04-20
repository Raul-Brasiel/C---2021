#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1, idade, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
	
	printf("Digite a idade de 20 pessoas:\n");
	
	do{
		printf("\nPessoa %d: ",i);
		scanf("%d",&idade);
		
		if(idade>=0 && idade<=12)
		{
			cont1++;
		}
		if(idade>=13 && idade<=20)
		{
			cont2++;
		}
		if(idade>=21 && idade<=45)
		{
			cont3++;
		}
		if(idade>=46 && idade<=60)
		{
			cont4++;
		}
		if(idade>60)
		{
			cont5++;
		}
		
		i++;
	}while(i<=20);
	
	printf("\nintervalo 1 - de 0 a 12 anos = %d pessoas",cont1);
	printf("\nintervalo 2 - de 13 a 20 anos = %d pessoas",cont2);
	printf("\nintervalo 3 - de 21 a 45 anos = %d pessoas",cont3);
	printf("\nintervalo 4 - de 46 a 60 anos = %d pessoas",cont4);
	printf("\nintervalo 5 - mais de 60 anos = %d pessoas",cont5); 
}
