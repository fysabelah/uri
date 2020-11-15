#include<iostream>

using namespace std;

int main(){
    float num1, num2, test = 1;
    
    while(test == 1){
        cin >> num1;
        
        while(num1 < 0 || num1 > 10){
            cout << "nota invalida" << endl;
            cin >> num1;
        }
        
        cin >> num2;
        
        while(num2 < 0 || num2 > 10){
            cout << "nota invalida" << endl;
            cin >> num2;
        }
        
        cout << fixed;
        cout.precision(2);
        cout << "media = " << (num1+num2)/2 << endl;
        
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> test;
        while(test < 1 || test > 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> test;
        }
    }
    
    return(0);
}