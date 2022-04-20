#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, cont = 0;
	float nota;
	
	for(i=1;i<=10;i++)
	{
		printf("Nota do aluno %d: ",i);
		scanf("%f",&nota);
		
		if(nota==6.0 || nota>6.0)
		{
			cont++;
		}
	}
	
	printf("\nAlunos aprovados: %d",cont);
}
