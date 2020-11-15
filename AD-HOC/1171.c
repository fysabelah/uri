#include<stdio.h>

int menorValor(int v[], int);

int main()
{
	int x, aux = 0, cont=0, j, parada=0;

	scanf("%d",&x);

	int vet[x],i;

	for (i=0;i<x;i++)
	{
		scanf("%d",&vet[i]);
	}

	for(j=0;j<x;j++)
	{
		cont=0;
		parada=0;
		aux=menorValor(vet,x);
		
		if(aux!=0)
		{
			for(i=0;i<x;i++)
			{
				if(vet[i]==aux)cont++;
			}
			
			printf("%d aparece %d vez(es)\n",aux,cont);
			
			for(i=0;i<x;i++)
			{
				if(vet[i]==aux)vet[i]=0;
				if(vet[i]==0)parada++;
			}
			
			if(parada==x)break;
		}
	}
	
	return(0);
}

int menorValor(int vet[], int x)
{
	int i, menor;

	for(i=0;i<x;i++)
	{
		if(vet[i]!=0)
		{
			menor=vet[i];
			break;
		}
	}
	for(i=0;i<x;i++)
	{

		if(vet[i]!=0 && vet[i]<menor)
		{
			menor=vet[i];
		}
		
	}
	
	return(menor);
}