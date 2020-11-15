#include<stdio.h>

int main(){
	int idadeDias;
	
	scanf("%d",&idadeDias);	
	
	printf("%d ano(s)\n",idadeDias / 356);
	
	if(idadeDias >= 365)
		idadeDias = idadeDias - (365 * (idadeDias / 365));
	
	printf("%d mes(es)\n",idadeDias/30);
	
	if(idadeDias >= 30)
		idadeDias = idadeDias - (30 * (idadeDias / 30));
	
	printf("%d dia(s)\n",idadeDias);
	
	return(0);
}