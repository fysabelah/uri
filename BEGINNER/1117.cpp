#include<iostream>

using namespace std;

int main(){
    float num1, num2;
    
    cin >> num1 >> num2;
    
    while(num1 < 0 || num2 < 0 || num1 > 10 || num2 > 10){
        cout << "nota invalida" << endl;
        
        if(num1 < 0 || num1 > 10) cin >> num1;
        if(num2 < 0 || num2 > 10) cin >> num2;
    }
    
    cout << fixed;
    cout.precision(2);
    cout << "media = " << (num1+num2)/2 << endl;
    
    return(0);
}