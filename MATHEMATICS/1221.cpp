#include<iostream>
#include<math.h>

using namespace std;

int verificar_primo(long int);

int main(){
    int casos;
    long int n;

    cin >> casos;

    while (casos--)
    {
        cin >> n;

        if(verificar_primo(n)) cout << "Prime\n";
        else cout << "Not Prime\n";
    }
    
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