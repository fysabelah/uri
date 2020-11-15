#include<iostream>

using namespace std;

int main(){
    int i, par = 0, num, impar = 0, pos = 0, neg = 0;
    
    for(i = 0; i < 5; i++){
        cin >> num;
        
        if(num % 2 == 0) par++;
        if(num % 2 != 0) impar++;
        if(num > 0) pos++;
        if(num < 0) neg++;
        
    }
    
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    
    return(0);
}