#include<iostream>
#include<algorithm>
#include <cstring>

using namespace std;

int main(){
    int rept, i, tamanho;
    char aux[10];

    cin >> rept;

    while(rept--){
        cin >> aux;

        tamanho = strlen(aux);

        char pstring[tamanho];

        strcpy(pstring, aux);

        sort(pstring, pstring + tamanho);

        do{
            for(i = 0; i < tamanho; i++){
                cout << pstring[i];
            }

            cout << "\n";
        }while(next_permutation(pstring, pstring+ tamanho));

        cout << "\n";
    }

    return(0);
}