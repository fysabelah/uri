#include<stdio.h>
int main()
{
	int n,i,soma,test;
	do
	{
		scanf("%d",&test);
	}while(test<1 || test>20);
	while(test!=0)
	{
		scanf("%d",&n);
		while(n<1 || n>100000000)
		{
			scanf("%d",&n);
		}
		soma=0;
		for(i=1;i<n;i++)
		{
			if(n % i==0)
			{
				soma+=i;
			}
		}
		if(n==soma)
		{
			printf("%d eh perfeito\n",n);
		}
		else
		{
			printf("%d nao eh perfeito\n",n);
		}
		test--;
	}
	return(0);
}