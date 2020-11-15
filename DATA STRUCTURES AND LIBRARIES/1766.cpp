#include<iostream>
#include <cstring>
#include<algorithm>

using namespace std;

typedef struct
{
    char nome[100];
    int peso, idade;
    float altura;
}Ovelha;

bool comper(Ovelha, Ovelha);

int main(){
    int rept, renas, puxar, i, cen;

    cin >> rept;

    cen = rept;

    while (rept--){
        cin >> renas >> puxar;

        Ovelha ovis[renas];

        for(i = 0; i < renas; i++){
            cin >> ovis[i].nome;
            cin >> ovis[i].peso;
            cin >> ovis[i].idade;
            cin >> ovis[i].altura;
        }

        sort(ovis, ovis + renas, comper);

        cout << "CENARIO {" << cen - rept << "}\n";

        for(i = 0; i < puxar; i++){
            cout << i+1 << " - " << ovis[i].nome << "\n";
        }
    }
    
}

bool comper(Ovelha ov1, Ovelha ov2){
    if(ov1.peso > ov2.peso) return(true);
    else{
        if(ov1.peso == ov2.peso){
            if(ov1.idade < ov2.idade) return(true);
            else{
                if(ov1.idade == ov2.idade){
                    if(ov1.altura < ov2.altura) return(true);
                    else{
                       if(ov1.altura == ov2.altura){
                           if(strcmp(ov1.nome, ov2.nome) > 0) return(true);
                       }

                       return(false); 
                    }

                    return(false);
                }

                return(false);
            }
        }

        return(false);
    }
}