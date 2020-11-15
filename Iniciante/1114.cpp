#include<iostream>

using namespace std;

int main(){
    int senha = 2002, tentativa;
    
    while(true){
        cin >> tentativa;
        if(tentativa == senha){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else cout << "Senha Invalida" << endl;
    }
    
    return(0);
}