#include<iostream>

using namespace std;

int main(){
    int max, i, j = 1; 
    
    cin >> max;
    
    for(i = 0; i < max; i++){
        cout << j << " " << j+1 << " " << j+2 << " PUM" << endl;
        j+=4;
    }
    
    return(0);
}