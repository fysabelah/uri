#include<iostream>

using namespace std;

int main(){
    int num, i, pos, maior;
    
    for(i = 0; i < 100; i++){
        cin >> num;
        
        if(i == 0){
            maior = num;
            pos = i+1;
        }
        
        if(maior < num){
            maior = num;
            pos = i+1;
        }
        
    }
    
    cout << maior << endl << pos << endl;
    
    return(0);
}