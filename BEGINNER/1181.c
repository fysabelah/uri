#include<stdio.h>
#include<string.h>
#define tamanho 12

int main()
{
	int linha,i,j,valorS,valorM;
	char escolha;
	double mat[tamanho][tamanho],resultado=0;
	
	//strcpy( letra1, "S");
	//strcpy( letra2, "M");
	
	do 
	{
		scanf("%d",&linha);
	}while(linha<0 || linha>11);
	
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
				resultado+=mat[linha][i];
	}

	//valorM=strcmp(escolha,letra2);
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