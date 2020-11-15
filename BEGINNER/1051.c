#include<stdio.h>
int main() {
	double salario,guarda;
	
  scanf("%lf",&salario);
	
  if (salario>=0 && salario<=2000.00)printf("Isento\n");
	else {
		salario=salario-2000;
		guarda=0;

		if(salario<=1000) {
			guarda=salario*0.08;
			printf("R$ %.2lf\n",guarda);
		}
		else {
			guarda=(1000*0.08);
			salario=salario-1000;

			if(salario<=1500){
				guarda=guarda+(salario*0.18);
				printf("R$ %.2lf\n",guarda);
			}
			else {	
				salario=salario-1500;
				guarda=guarda+(1500*0.18)+(salario*0.28);
				printf("R$ %.2lf\n",guarda);
				
			}
		}
	}		
	return(0);
}