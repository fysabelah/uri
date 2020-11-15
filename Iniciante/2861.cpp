#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int teste = 0;
    string pergunta, resposta = "gzuz";
    
    cin >> teste;
    
    while(teste){
        cin.ignore();
        getline(cin, pergunta);
        cout << resposta << endl;
        teste --;
    }
    
    return(0);
}