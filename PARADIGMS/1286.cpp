/*Solução se baseia no problema da mochila*/

#include<iostream>
#include <algorithm>
#define tamped 21
#define tampizza 31

using namespace std;

typedef struct{
    int quantpizzas;
    int tempoentrega;
}Entrega;

Entrega pedido[tamped];
int matriz[tamped][tampizza];

int main(){
    int numpedidos, numpizzas, i, j;

    while (cin >> numpedidos, numpedidos){
        cin >> numpizzas;

        for(i = 1; i < numpedidos + 1; i++)
            cin >> pedido[i].tempoentrega >> pedido[i].quantpizzas;

        for(i = 1; i < numpedidos + 1; i++)
            matriz[i][0] = 0;
        
        for(i = 1; i < numpizzas + 1; i++)
            matriz[0][i] = 0;

        for(i = 1; i < numpedidos + 1; i ++){
            for(j = 1; j < numpizzas + 1; j++){
                if(pedido[i].quantpizzas <= j){
                    matriz[i][j] = max(matriz[i - 1][j], matriz[i - 1][j - pedido[i].quantpizzas] + pedido[i].tempoentrega);
                }
                else{
                    matriz[i][j] = matriz[i - 1][j];
                }
            }
        }

        cout << matriz[numpedidos][numpizzas] << " min.\n";
    }
    
    return(0);
}