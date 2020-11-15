#include<stdio.h>
#include<stdlib.h>

int Pontos(int);

int t,s;

int main()
{
	int i,n,l, pontosA=0, pontosB=0;
	
	scanf("%d %d %d", &n, &t,&l);
	
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&s);
		if (i % 2==0)
		{
			pontosA+=Pontos(l);
		}
		else
		{
			pontosB+=Pontos(l);
		}
	}
	
	printf("%d %d\n",pontosA, pontosB);
	return(0);
}			
	
int Pontos(int l)
{
	int pontos=0;
	
	if(abs(t-s)<=l)
	{
		pontos+=abs(t-s);
		t=s;
	}
	
	return(pontos);
}