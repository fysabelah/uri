#include<iostream>

using namespace std;

int main(){
    int max, i, j = 1; 
    
    cin >> max;
    
    for(i = 0; i < max; i++){
        cout << j << " " << j*j << " " << j*j*j << endl;
        j++;
    }
    
    return(0);
}