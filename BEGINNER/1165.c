#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor,num,cont=0,j,i;
    do{
      scanf("%i",&valor);
    }while(valor<1 || valor>100);
    for(i=0;i<valor;i++){
	do{
		scanf("%i",&num);
	}
        while(num<2 || num>1000000);
        cont=0;
        j=2;
        while(j<=num/2){
              if(num%j==0){
                 cont++;
              }
              j++;
       }
       if(cont==0){
          printf("%i eh primo\n",num);
       }
       else{
           printf("%i nao eh primo\n",num);
       }

   }
   return 0;
}