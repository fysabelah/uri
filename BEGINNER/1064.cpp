#include<iostream>

using namespace std;

int main(){
    int i, cont = 0;
    float vetor[6], numeros = 0.0;
    
    for(i = 0; i < 6; i++){
        cin >> vetor[i];
        
        if(vetor[i] > 0){
            cont++;
            numeros+=vetor[i];
        }
    }
    
    cout << cont << " valores positivos" << endl;
    cout << fixed;
    cout.precision(1);
    cout << numeros/cont << endl;
    
    return(0);
}