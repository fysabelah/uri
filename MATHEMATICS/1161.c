#include<stdio.h>

unsigned long long int Fatorial(int );

int main()
{
	unsigned long long int somaN=0,somaM=0;
	int m,n;

	while (scanf("%d%d",&m,&n)!=EOF)
	{
		somaN=Fatorial(n);
		somaM=Fatorial(m);
		printf("%llu\n",somaN+somaM);
	}
	return(0);
}

unsigned long long int Fatorial(int numero)
{
	if(numero==1 || numero==0)return(1);
	else
	{	
		return(numero*Fatorial(numero-1));
	}
}
		 
