#include<iostream>

using namespace std;

long int fatorial(int);

int main(){
    int numero;
    
    cin >> numero;
    
    cout << fatorial(numero) << endl;
    
    return(0);
}

long int fatorial(int numero){
    if(numero == 1) return(1);
    
    return(numero*fatorial(numero-1));
}

