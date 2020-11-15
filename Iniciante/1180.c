//as duas formas de leitura funciona
//while (i <n && scanf("%d", &vet[i++]));
#include<stdio.h>
int main()
{
	int n,i,pos = 0;
	
	scanf("%d",&n);
	
	while(n<=1 || n>=1000)
	{
		scanf("%d",&n);
	}
	
	int vet[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&vet[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(vet[i]<=vet[pos])
		{
			pos=i;
		}
	}
	
	printf("Menor valor: %d\n",vet[pos]);
	printf("Posicao: %d\n",pos);
	
	return(0);
}