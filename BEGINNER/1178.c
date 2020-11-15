#include<stdio.h>
int main()
{
	double x, vet[100];
	int i;
	scanf("%lf",&x);
	vet[0]=x;
	for(i=1;i<100;i++)
	{
		vet[i]=vet[i-1]/2.0;
		
	}
	for(i=0;i<100;i++)
	{
		printf("N[%d] = %.4f\n",i,vet[i]);
	}
	return(0);
}