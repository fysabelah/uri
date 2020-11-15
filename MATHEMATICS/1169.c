#include<stdio.h>
#include<math.h>

int main()
{
	void gramaTrigo(int test);
	int test;

	
	do
	{
		scanf("%d",&test);
	}while(test<1 ||test>100);
	
	gramaTrigo(test);
	
	return(0);
}

void gramaTrigo(int test)
{
	int i,j;
	unsigned long long int trigo,numero,aux;
	
	for(i=0;i<test;i++)
	{
		
		do
		{
			scanf("%llu",&numero);
		}while(numero<1 || numero>64);
		
		trigo=0;
		aux=0;
		
		for(j=0;j<numero;j++)
		{
			aux=pow(2,j);
			trigo=trigo+aux;
		}
		
		trigo=trigo/12;
		trigo=trigo/1000;
		
		printf("%llu kg\n",trigo);
	}
}