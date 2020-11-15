#include<stdio.h>

int main(){
	int tempo;

	scanf("%d",&tempo);
	
  printf("%d:",tempo/3600);
	tempo = tempo - (tempo / 3600) * 3600;
	
  printf("%d:",tempo/60);
	tempo = tempo - (tempo / 60) * 60;
	
  printf("%d\n",tempo);
	
  return(0);
}