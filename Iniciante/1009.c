#include<stdio.h>

int main(){
	double salario, vendas, com=0;
	char nome[100];
	
  scanf("%[^\n]s",nome);
	setbuf(stdin, NULL);
	scanf("%lf",&salario);
	scanf("%lf",&vendas);
	
  com = vendas * 0.15;
	
  printf("TOTAL = R$ %.2lf\n",salario+com);
	
  return(0);
}