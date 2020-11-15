#include<iostream>
#include<algorithm>

using namespace std;

typedef struct{
    int tempo;
    int disponivel;
}Pedido;

Pedido ped[100001];

bool comparaDisponivel(Pedido, Pedido);

int main(){
    int quantidade, i, dis;

    while (cin >> quantidade){
        dis = 1;

        for(i = 0; i < quantidade; i++)
            cin >> ped[i].disponivel >> ped[i].tempo;

        sort(ped,ped + quantidade, comparaDisponivel);
        
        for(i = 0; i < quantidade; i++){
            if(ped[i].disponivel > dis){
                dis += ped[i].disponivel - dis + ped[i].tempo;
            }
            else{
                dis += ped[i].tempo;
            }
        }

        cout << dis << "\n";
    }
    

    return(0);
}

bool comparaDisponivel(Pedido a, Pedido b){
    return(a.disponivel < b.disponivel);
}