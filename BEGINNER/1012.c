#include<stdio.h>
#define pi 3.14159

int main(){
	double a,b,c;

	scanf("%lf %lf %lf",&a,&b,&c);
	
  printf("TRIANGULO: %.3lf\n",(a*c)/2);
	printf("CIRCULO: %.3lf\n",c*pi*c);
	printf("TRAPEZIO: %.3lf\n",((b+a)*c)/2);
	printf("QUADRADO: %.3lf\n",b*b);
	printf("RETANGULO: %.3lf\n",a*b);
	
  return(0);
}