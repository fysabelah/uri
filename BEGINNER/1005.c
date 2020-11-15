#include<stdio.h>

int main(){
	double num1, num2, media = 0;
	
  scanf("%lf", &num1);
	scanf("%lf", &num2);
	
  media = (num1 * 3.5 + 7.5 * num2) / 11;
	
  printf("MEDIA = %.5lf\n",media);
	
  return(0);
}