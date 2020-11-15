#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    
    cin >> num1 >> num2;
    
    while(num1 != num2){
        if(num1 > num2) cout << "Decrescente" << endl;
        else cout << "Crescente" << endl;
        
        cin >> num1 >> num2;
    }
    
    return(0);
}