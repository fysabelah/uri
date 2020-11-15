#include<stdio.h>

int main(){
	double num1,num2, num3, media=0;
	
  scanf("%lf",&num1);
	scanf("%lf",&num2);
	scanf("%lf",&num3);
	
  media = (num1 * 2 + 3 * num2 + num3 * 5) / 10;
	
  printf("MEDIA = %.1lf\n",media);
	
  return(0);
}