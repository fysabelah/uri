#include<iostream>

using namespace std;

int main(){
    int inter, gremio, test, cont = 0, vitg = 0, viti = 0, emp = 0;
    
    do{
        cin >> inter >> gremio;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> test;
        
        cont++;
        
        if(inter > gremio) viti++;
        else{
            if(inter == gremio) emp++;
            else vitg++;
        }
    }while(test == 1);
    
    cout << cont << " grenais" << endl;
    cout << "Inter:" << viti << endl;
    cout << "Gremio:" << vitg << endl;
    cout << "Empates:" << emp << endl;
    
    if(viti == vitg) cout << "Nao houve vencedor" << endl;
    else{
        if(viti > vitg) cout << "Inter venceu mais" << endl;
        else cout << "Gremio venceu mais" << endl;
    }
    
    return(0);
}