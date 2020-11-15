#include<iostream>

using namespace std;

int main(){
    int teste, energia;
    
    cin >> teste;
    
    while(teste){
        cin >> energia;
        
        if(energia > 8000) cout << "Mais de 8000!" << endl;
        else cout << "Inseto!" << endl;
        
        teste --;
    }
    
    return(0);
}