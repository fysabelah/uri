#include<iostream>

using namespace std;

int main(){
    int max;
    float num1, num2;
    
    cin >> max;
    
    while(max){
        cin >> num1 >> num2;
        
        if(num2 == 0) cout << "divisao impossivel" << endl;
        else{
            cout << fixed;
            cout.precision(1);
            cout << num1/num2 << endl;
        }
        
        max--;
    }
    
    return(0);
}