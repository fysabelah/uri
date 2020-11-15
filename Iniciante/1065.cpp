#include<iostream>

using namespace std;

int main(){
    int i, cont = 0, num;
    
    for(i = 0; i < 5; i++){
        cin >> num;
        
        if(num % 2 == 0) cont++;
    }
    
    cout << cont << " valores pares" << endl;
    
    return(0);
}