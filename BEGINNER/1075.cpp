#include<iostream>

using namespace std;

int main(){
    int num, i;
    
    cin >> num;
    
    for(i = 1; i <= 10000; i++){
        if(i % num == 2) cout << i << endl;
    }
    
    return(0);
}