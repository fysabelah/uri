#include<iostream>

using namespace std;

int main(){
    int i, max, min, aux, soma = 0;
    
    cin >> max >> min;
    
    if(max < min){
        aux = min;
        min = max; 
        max = aux;
    }
    
    for(i = min+1; i < max; i++){
        if(i % 2 != 0) soma+= i;
    }
    
    cout << soma << endl;
    
    return(0);
}