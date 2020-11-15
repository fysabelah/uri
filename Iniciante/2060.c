#include<stdio.h>

int main()
{
	int n, i, div2=0,div3=0,div4=0,div5=0;
	
	scanf("%d",&n);
	
	int vet[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(vet[i] % 2==0)div2++;
		if(vet[i] % 3==0)div3++;
		if(vet[i] % 4==0)div4++;
		if(vet[i] % 5==0)div5++;
	}
	
	printf("%d Multiplo(s) de 2\n",div2);
	printf("%d Multiplo(s) de 3\n",div3);
	printf("%d Multiplo(s) de 4\n",div4);
	printf("%d Multiplo(s) de 5\n",div5);
	
	return(0);
}