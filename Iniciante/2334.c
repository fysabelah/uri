#include<stdio.h>

int main()
{
	unsigned long long int patinhos;
	
	while((scanf("%llu",&patinhos)) != -1)
	{
		if (patinhos==-1)break; 
		
		if(patinhos == 0)printf("0\n");		
		else
		{
			printf("%llu\n",patinhos-1);
		}
	}
	
	return(0);
}