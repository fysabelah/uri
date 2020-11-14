#include<stdio.h>

int main(){
	int vet[3], posLeitura[3], i, j, aux = 0;

	scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);
  
  for(i = 0; i < 3; i++)
		posLeitura[i]=vet[i];

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(vet[i] > vet[j])
			{
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}

	for(i = 2; i >= 0; i--)
	  printf("%d\n",vet[i]);

	printf("\n");

	for(i = 0; i < 3; i++)
		printf("%d\n", posLeitura[i]);
	
	return(0);
}