#include<stdio.h> 
#define tamanho 3

void ordena(float, float, float, float []);
void tiposTriangulo(float, float, float);

int main()
{
	int i;
	float a,b,c,vet[tamanho];
	
	scanf("%f %f %f",&a,&b,&c);
	
	ordena(a,b,c,vet);
	
	a=vet[0];
	b=vet[1];
	c=vet[2];

	tiposTriangulo(a, b, c);
	
	return(0);
}

void ordena(float a, float b, float c, float vet[])
{
	int i,j;
	float aux=0;
	
	vet[0]=a;
	vet[1]=b;
	vet[2]=c;

	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			if(vet[i]>=vet[j])
			{
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	
}

void tiposTriangulo(float a, float b, float c)
{
	
	if(a >= b+c)
	{
	 	printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
		if(a*a == (b*b+c*c)) printf("TRIANGULO RETANGULO\n");
		if(a*a > b*b+c*c) printf("TRIANGULO OBTUSANGULO\n");
		if(a*a < b*b+c*c) printf("TRIANGULO ACUTANGULO\n");
		if(a==b && b==c) printf("TRIANGULO EQUILATERO\n");
		if((a==b && a!=c) || (a==c && c!=b) || (b==c && a!=c)) printf("TRIANGULO ISOSCELES\n");
	}
}