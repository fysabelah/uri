#include<stdio.h>
#include<string.h>
#define tamanho 12

int main()
{
	int coluna,i,j;
	char escolha;
	double mat[tamanho][tamanho],resultado=0;
	
	do 
	{
		scanf("%d",&coluna);
	}while(coluna<0 || coluna>11);
	
	scanf(" %c",&escolha);	

	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			scanf(" %lf",&mat[i][j]);
		}
	}

	for(i=0;i<tamanho;i++)
	{
				resultado+=mat[i][coluna];
	}

	if(escolha=='M')
	{
		printf("%.1lf\n", resultado/tamanho);
	}
	else if(escolha=='S')
	{
		printf("%.1lf\n", resultado);
	}
	return(0);
}