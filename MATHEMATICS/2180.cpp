#include<iostream>
#include<math.h>

using namespace std;

int verificar_primo(long int);

int main(){
    int peso, primos = 0, cont = 10;

    cin >> peso;

    while(cont){
        if(verificar_primo(peso)){
            cont--;
            primos += peso;
            peso++;   
        }
        else peso++;
    }

    cout << primos << " km/h\n";
    cout << 60000000 / primos << " h / " << (60000000 / primos) / 24 << " d\n";

    return(0);
}

int verificar_primo(long int n){
    //Retorna 1 para primo
    
    if(n < 2) return(0);

    if(n == 2) return(1);

    //tirando pares
    if(n % 2 == 0) return(0);

    int i;
    for(i = 3; i < sqrt(n); i+=2){
        if(n % i == 0) return(0);
    }

    return(1);
}