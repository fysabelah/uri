#include<stdio.h>
int main()
{
	int t, vet[1000],i,cont=0;
	do 
	{
		scanf("%d",&t);
	}while(t<2 || t>50);
	for(i=0;i<1000;i++)
	{
		vet[i]=cont;
		if(cont==t-1 && i<1000)
		{
			cont=0;
		}
		else
		{
			cont++;
		}
	}
	for(i=0;i<1000;i++)
	{
		printf("N[%d] = %d\n",i,vet[i]);
	}
	return(0);
}