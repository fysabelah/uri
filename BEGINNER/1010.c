#include<stdio.h>

int main(){
	int codigo1, num1, codigo2,num2;
	double valor1,valor2;

	scanf("%d %d %lf",&codigo1,&num1,&valor1);
	scanf("%d %d %lf",&codigo2,&num2,&valor2);
	
  printf("VALOR A PAGAR: R$ %.2lf\n",num1*valor1+num2*valor2);
	
  return(0);
}