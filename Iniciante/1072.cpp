#include<iostream>

using namespace std;

int main(){
    int i, max, dentro = 0, fora = 0, num;
    
    cin >> max;
    
    for(i = 0; i < max; i++){
        cin >> num;
        
        if(num >= 10 and num <= 20) dentro++;
        else fora++;
    }
    
    cout << dentro << " in" << endl;
    cout << fora << " out" << endl;
    
    return(0);
}