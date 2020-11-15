#include<stdio.h>

long int fibo(int);

int main()
{
	int n,i;
	long int valor;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		valor=fibo(i);

		if(i==n-1)
		{
			printf("%li\n",valor);
		}
		else
		{
			printf("%li ",valor);
		}
	}
	
	return(0);
}

long int fibo(int n)
{
	long int a,b,aux=0;
	int i;
	
	a=0;
	b=1;
	if(n==0)return(0);
	if(n==1) return(1);
	else
	{
		for(i=0;i<n-1;i++)
		{
			aux=a+b;
			a=b;
			b=aux;
		}
		return(aux);
	}
}