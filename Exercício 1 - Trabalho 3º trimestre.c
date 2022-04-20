//Dupla: Paulo Henrique Marques Silva e Raul Castro Brasiel

int verificarDias(int mes, int ano)
{
	if(ano%4 != 0)
	{
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
		{
			return 31;
		}
		if(mes==4 || mes==6 || mes==9 || mes==11)
		{
			return 30;
		}
		if(mes==2)
		{
			return 28;	
		}	
	}
	
	if(ano%4 == 0)
	{
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
		{
			return 31;
		}
		if(mes==4 || mes==6 || mes==9 || mes==11)
		{
			return 30;
		}
		if(mes==2)
		{
			return 29;	
		}	
	}	
}

int main()
{
	int mes, ano, dias;
	
	printf("Digite o mes:\n");
	scanf("%d",&mes);
	
	printf("Digite o ano:\n");
	scanf("%d",&ano);	
	
	dias = verificarDias(mes,ano);
	
	printf("\nO mes %d de %d possui %d dias",mes,ano,dias);
}
