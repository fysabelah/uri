#include<iostream>

using namespace std;

int main(){
    int x, y, aux, i, soma = 0;
    
    cin >> x >> y;
    
    if(y < x){
        aux = x;
        x = y;
        y = aux;
    }
    
    for(i = x+1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3) cout << i << endl;
    }
    
    return(0);
}