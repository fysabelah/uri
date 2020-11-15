#include<stdio.h>

void inicializa(int[], int);
int busca(int[], int);

int main(){
    int nBairros, nConexoes, nPerguntas, c1, c2;

    scanf("%d %d %d", &nBairros, &nConexoes, &nPerguntas);

    int conjuntos[nBairros+1];
    int j,k;

    inicializa(conjuntos, nBairros+1);

    while(nConexoes--){
        scanf("%d %d", &c1, &c2);

        for(k = c1; k != conjuntos[k]; k = conjuntos[k]);
        for(j = c2; j != conjuntos[j]; j = conjuntos[j]);

        if(k == j) continue;

        conjuntos[k] = j;
    }

    while(nPerguntas--){
        scanf("%d %d", &c1, &c2);

        if(busca(conjuntos, c1) == busca(conjuntos, c2)){
            printf("Lets que lets\n");
        }
        else{
            printf("Deu ruim\n");
        }
    }

    return(0);
}

void inicializa(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        arr[i] = i;
    }
}

int busca(int arr[], int i){
    if(arr[i] == i) return(i);

    busca(arr, arr[i]);
}