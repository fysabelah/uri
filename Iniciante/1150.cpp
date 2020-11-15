#include<iostream>

using namespace std;

int main(){
    int x, z, i, cont = 1;
    
    cin >> x;
    cin >> z;
    
    while(z <= x) cin >> z;
    
    for(i = x+1; i <= z; i++){
        cont ++;
        x+=i;
        
        if (x > z) break;
    }
    
    cout << cont << endl;
    
    return(0);
}