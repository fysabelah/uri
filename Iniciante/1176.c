#include<stdio.h>

unsigned long long int sequencia[60] = {0};
unsigned long long int fibonacci (int );

int main()
{
	int quantidade, numero, i;
	unsigned long long int fibb;
	
	scanf("%d",&quantidade);
	
	for(i=0;i<quantidade;i++)
	{
		scanf("%d",&numero);
		
		fibb=fibonacci(numero);
		printf("Fib(%d) = %llu\n",numero,fibb);
	}
	
	return(0);
}

unsigned long long int fibonacci (int numero)
{
	if(numero==0)
	{
		return(0);
	}
	if(numero==1) 
	{
		return(1);
	}
	else 
	{
		if(sequencia[numero] == 0) 
		{
			sequencia[numero] = fibonacci(numero-1)+fibonacci(numero-2);			
		}

		return sequencia[numero];
	}
}

