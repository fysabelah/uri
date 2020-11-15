#include<stdio.h>
#define tamanho 12

double Soma(double mat[][tamanho]);
double Media(double mat[][tamanho]);

int main()
{
	char o;
	double mat[tamanho][tamanho];
	int i,j;

	scanf(" %c",&o);
	
	for(i=0;i<tamanho;i++)
	{	
		for(j=0;j<tamanho;j++)
		{	
			scanf("%lf",&mat[i][j]);
		}
	}
	
	if(o=='S')
	{
		printf("%.1lf\n",Soma(mat));
	}
	if(o=='M') 
	{
		printf("%.1lf\n",Media(mat));
	}
	
	return(0);
}

double Soma(double mat[][tamanho])
{
	int i,j;
	double soma=0;
	for(i=0;i<tamanho;i++)
	{	
		for(j=0;j<tamanho;j++)
		{	
			if(j!=tamanho-1-i)
			{
				if(i>j)
				{
					soma+=mat[i][j];
				}
			}
			else
			{
				break;
			}
		}
	}
	return(soma);
}
double Media(double mat[][tamanho])
{
	int i,j,cont=0;
	double resultado=0;
	for(i=0;i<tamanho;i++)
	{	
		for(j=0;j<tamanho;j++)
		{	
			if(j!=tamanho-1-i)
			{
				if(i>j)
				{
					cont++;
				}
			}
			else break;
		}
	}
	resultado=Soma(mat)/cont;
	return(resultado);
}