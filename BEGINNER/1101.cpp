#include<iostream>

using namespace std;

int main(){
    int soma = 0, num1, num2, aux, i;
    
    cin >> num1 >> num2;
    
    while(num1 > 0 and num2 > 0){
        if(num1 > num2){
            aux = num1;
            num1 = num2;
            num2 = aux;
        }
        
        for(i = num1; i <= num2; i++) {
            cout << i << " ";
            soma+=i;
        }
        
        cout << "Sum=" << soma << endl;
        soma = 0;
        
        cin >> num1 >> num2;
    }
    
    return(0);
}