#include<iostream>

using namespace std;

int main(){
    int idade, cont = 0, soma = 0;
    
    cin >> idade; 
    
    while(idade > 0){
        cont ++;
        soma+= idade;
        cin >> idade;
    }
    
    cout << fixed;
    cout.precision(2);
    cout << (soma+0.0)/cont << endl;
    
    return(0);
}