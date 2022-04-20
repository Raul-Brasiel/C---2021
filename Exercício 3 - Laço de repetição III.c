#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, parts, voto, total;
	float percentual1, percentual2, percentual3, percentual4, percentual5, percentual6;
	
	printf("Escreva o total de participantes na eleicao:\n");
	scanf("%d",&parts);
	
	printf("\nDigite 1, 2, 3 ou 4 para votar nos respectivos candidatos \nDigite 5 para voto nulo \nDigite 6 para voto em branco\n\n");
	
	for(i=1;i<=parts;i++)
	{
		printf("Pessoa %d\n",i);
		scanf("%d",&voto);
		
		if(voto != 0)
		{
			if(voto == 1)
			{
				cont1++;
			}
			if(voto == 2)
			{
				cont2++;
			}
			if(voto == 3)
			{
				cont3++;
			}
			if(voto == 4)
			{
				cont4++;
			}
			if(voto == 5)
			{
				cont5++;
			}
			if(voto == 6)
			{
				cont6++;
			}
			
			if(i == parts)
			{
				total = cont1 + cont2 + cont3 + cont4 + cont5 + cont6;
				percentual1 = (cont1*100)/total;
				percentual2 = (cont2*100)/total;
				percentual3 = (cont3*100)/total;
				percentual4 = (cont4*100)/total;
				percentual5 = (cont5*100)/total;
				percentual6 = (cont6*100)/total;
				
				printf("\nTotal de votos:\nCandidato 1: %d (%.2f%%) \nCandidato 2: %d (%.2f%%) \nCandidato 3: %d (%.2f%%) \nCandidato 4: %d (%.2f%%) \nVotos nulos: %d (%.2f%%)\nVotos brancos: %d (%.2f%%)\n\n",cont1,percentual1,cont2,percentual2,cont3,percentual3,cont4,percentual4,cont5,percentual5,cont6,percentual6);
			}
		}
		if(voto == 0)
		{
			parts = 0;
			
			printf("\nVotacao encerrada por ser digitado o numero 0.");
		}
	}
}
