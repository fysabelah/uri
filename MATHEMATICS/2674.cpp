#include<iostream>
#include<math.h>

using namespace std;

int verificar_primo(unsigned int);

int main(){
    unsigned int numero; 
    int flag;

   while(cin >> numero){
       if(verificar_primo(numero) == 0) cout << "Nada\n";
       else{
           do{
               flag =  verificar_primo(numero % 10);
               numero /= 10;
            }while(numero && flag);

            if(numero == 0 && flag == 1) cout << "Super\n";
            else cout << "Primo\n";
        }
   }

    return(0);
}

int verificar_primo(unsigned int n){
    unsigned int i;

    if(n == 2) return(1);

    if(n % 2 == 0 || n < 2) return(0);

	for (i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return(0);

	return(1);
}