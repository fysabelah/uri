#include<iostream>

using namespace std;

int main(){
    int base = 1, pcarro, test, ganhou = 0;
    
    cin >> test;
    
    while (test){
        cin >> pcarro;
        
        if(pcarro != base) ganhou++;
        
        test--;
    }
    
    cout << ganhou << endl;
    
    return(0);
}