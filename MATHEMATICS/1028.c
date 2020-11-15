#include<stdio.h>

void mdc(int ,int );

int main()
{
	int n,f1,f2,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&f1,&f2);
		mdc(f1,f2);
	}
	
	return(0);
}

void mdc(int f1,int f2)
{
	int maior, menor, menorIn, MDC, resto=1, quociente, cont=0;
	
	if(f1>f2)
	{
		maior=f1;
		menor=f2;
	}
	else
	{
		maior=f2;
		menor=f1;
	}
	
	menorIn=menor;
	
	while(resto!=0)
	{
		MDC=resto;
		resto= maior % menor;
		maior=menor;
		menor=resto;
		cont++;
	}
	
	if(cont==1)
	{
		MDC=menorIn;
	}
	
	printf("%d\n",MDC);
}