#include<stdio.h>

void preco(int , int);

int main(){
	int codigo,quantidade;
	
	scanf("%d %d", &codigo, &quantidade);
	
	preco(codigo,quantidade);
	
	return(0);
}

void preco(int codigo, int quantidade){
	switch (codigo)
	{
		case 1:
			printf("Total: R$ %.2f\n",quantidade * 4.0);
			break;
		case 2:
			printf("Total: R$ %.2f\n",quantidade * 4.5);
			break;
		case 3:
			printf("Total: R$ %.2f\n",quantidade * 5.0);
			break;
		case 4:
			printf("Total: R$ %.2f\n",quantidade * 2.0);
			break;
		case 5:
			printf("Total: R$ %.2f\n",quantidade * 1.5);
			break;
	}
}