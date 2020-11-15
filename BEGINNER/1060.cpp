#include<iostream>

using namespace std;

int main(){
    int i, cont = 0;
    float vetor[6];
    
    for(i = 0; i < 6; i++){
        cin >> vetor[i];
        
        if(vetor[i] > 0) cont++;
    }
    
    cout << cont << " valores positivos" << endl;
    
    return(0);
}