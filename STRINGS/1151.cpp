#include<iostream>
#include<string.h>
#define tamanho 26
#define alfa 97

using namespace std;

int main(){
    int casos, i, letras;
    char linha[1001];

    cin >> casos;

    while(casos --){
        cin.ignore();
        cin.getline(linha, 10001);

        int quantidade[tamanho];
        letras = 0;

        memset(quantidade, 0, sizeof(quantidade));

        for(i = 0; i < strlen(linha); i++){
            if(int(linha[i]) >= 97 && int(linha[i]) <= 122){
                quantidade[linha[i] - alfa]++;

                if(quantidade[linha[i] - alfa] == 1) letras++;
            }
        }

        if(letras == 26) cout << "frase completa\n";
        else{
            if(letras >= 13) cout << "frase quase completa\n";
            else cout << "frase mal elaborada\n";
        }
    }

    return(0);
}