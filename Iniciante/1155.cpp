#include<iostream>

using namespace std;

int main(){
    int i;
    float soma = 0.0;
    
    for(i = 1; i <= 100; i++) soma += ((1+0.0)/i);
    
    cout << fixed;
    cout.precision(2);
    cout << soma << endl;
    
    return(0);
}