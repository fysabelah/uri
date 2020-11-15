#include<iostream>

using namespace std;

int main(){
    int horai, horaf;
    
    cin >> horai >> horaf;
    
    if(horai == horaf) cout << "O JOGO DUROU 24 HORA(S)" << endl;
    else{
        if(horai < horaf) cout << "O JOGO DUROU " << horaf - horai << " HORA(S)" << endl;
        else cout << "O JOGO DUROU " << 24 - horai + horaf << " HORA(S)" << endl;
    }
    
    return(0);
}