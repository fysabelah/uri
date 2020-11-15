#include<iostream>

using namespace std;

int main(){
    int soma = 0, num1, num2, aux, i, max;
    
    cin >> max;
    
    while(max){
        cin >> num1 >> num2;
        
        if(num1 > num2){
            aux = num1;
            num1 = num2;
            num2 = aux;
        }
        
        for(i = num1+1; i < num2; i++) {
            if(i % 2 != 0) soma+=i;
        }
        
        cout <<soma << endl;
        soma = 0;
        
        max--;
    }
    
    return(0);
}