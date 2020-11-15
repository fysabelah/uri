#include<iostream>
#include<string.h>
#define tamanho 26
#define alfa 65
#define modulo 1000000007

using namespace std;

long long fatorial(int);
long long quantRepetidas(int[]);
long long exponenciacaoBinaria(long long, long long, long long);


int main(){
    char str[1001];
    int i, quantidade[tamanho], flag;

    while(cin >> str){
        memset(quantidade, 0, sizeof(quantidade));

        flag = 0;

        for(i = 0; i < strlen(str);i++){
            quantidade[str[i] - alfa] += 1;

            //Se flag recebe 1 é porque repete letras
            if(quantidade[str[i] - alfa] > 1) flag = 1;
        }

        //Iverso modular é o valor que tem que pôr aqui
        /*(a/b) mod m = 
        (a * c) mod m
        c = b ^ (m - 2)*/

        if(flag){
            long long numerador = fatorial(strlen(str));
            long long denominador = exponenciacaoBinaria(quantRepetidas(quantidade), modulo - 2, modulo);
            /*Perguntar pro professor:
            As duas funções retornam o número dentro do módulo, então porque
            (numerador * denominador) % modulo, não funciona e a abaixo sim.*/
            cout << ((numerador % modulo) * (denominador % modulo)) % modulo << "\n";
            
        }
        else{
            cout << fatorial(strlen(str)) % modulo << "\n";
        }

    }

    return(0);
}

long long quantRepetidas(int q[]){
    long long den = 1;
    int i;

    for(i = 0; i < tamanho; i++){
        if(q[i] != 0){
            den = (den * fatorial(q[i])) % modulo;
        }
    }

    return(den);
}

long long fatorial(int n){
    int i;
    long long fat = 1;

    for(i = 1; i <= n; i++){
        fat = (fat * i) % modulo;
    }

    return(fat);
}

long long exponenciacaoBinaria(long long a, long long b, long long m){
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)    //impar  (& operador bitwise and)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;   // /2 ( >> operador bitwise shift)
    }
    return res;
}