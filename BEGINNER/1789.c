#include<stdio.h>

int main()
{
	int lesmas;
	
	while(scanf("%d",&lesmas) != EOF)
	{
		int velocidade[lesmas], maior=0, i;
		
		for(i=0;i<lesmas;i++)
		{
			scanf("%d",&velocidade[i]);
		}
		
		for(i=0;i<lesmas;i++)
		{
			if(velocidade[i]>maior)
			{
				maior=velocidade[i];
			}
		}
		
		if(maior<10)printf("1\n");
		if(maior >= 10 && maior<20)printf("2\n");
		if(maior >= 20)printf("3\n");
	}
	
	return(0);
}