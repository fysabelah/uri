#include<iostream>

using namespace std;

int main(){
    int i, max;
    
    cin >> max;
    
    for(i = 1; i <= max; i++){
        if(i % 2 != 0) cout << i << endl;
    }
    
    return(0);
}