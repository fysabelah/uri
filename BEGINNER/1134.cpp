#include<iostream>

using namespace std;

int main(){
    int gas = 0, alc = 0, dies = 0, num;
    
    cin >> num;
    
    while(num != 4){
        if(num == 2) gas++;
        else{
            if(num == 1) alc++;
            else if(num == 3) dies++;
        }
        
        cin >> num;
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dies << endl;
    
    return(0);
}