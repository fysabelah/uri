#include<stdio.h>
#include<math.h>

void escolha(int test);

int main()
{
	int test;
	
	scanf("%d",&test);
	
	escolha(test);
	return(0);
}

void escolha(int test)
{
	int r,c,b,x,y;
	
	while (test!=0)
	{
	
		do
		{
			scanf("%d%d",&x,&y);
		}while(x<1 || y>100);
	
		r=pow(3*x,2)+pow(y,2);
		b=2*pow(x,2)+pow(5*y,2);
		c=-100*x+pow(y,3);
		
		if(r>b && r>c)printf("Rafael ganhou\n");
		if(r<b && b>c)printf("Beto ganhou\n");
		if(c>r && c>b)printf("Carlos ganhou\n");
		
		test--;
	}
}