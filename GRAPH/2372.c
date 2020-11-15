//Floyd-Warshall
#include<stdio.h>
#define INF 99999

int main(){
    int nCidades, nEstradas, cid1, cid2, distancia, i, j, k;

    scanf("%d %d", &nCidades, &nEstradas);

    int matriz[nCidades][nCidades];

    //inicializa a matriz já com a forma correta pro algoritmo
    for(i = 0; i < nCidades; i++){
        for(j = 0; j < nCidades; j++){
            if(i == j) matriz[i][j] = 0;
            else matriz[i][j] = INF;
        }
    }

    //Colocando o peso das arestas
    for(i = 0; i < nEstradas; i++){
        scanf("%d %d %d", &cid1, &cid2, &distancia);
        matriz[cid1][cid2] = distancia;
        matriz[cid2][cid1] = distancia;
    }

    //Algoritmo de menor caminho entre todos os pares
    for (k = 0; k < nCidades; k++){
        //Pega todos os vertices como origem um por um
        for (i = 0; i < nCidades; i++){
            // Pega todos os vertices como destino para for de cima
            for (j = 0; j < nCidades; j++){
                //Se o vertice k estiver no caminho mais curto de i a j, atualiza o valor de [i][j]
                if (matriz[i][k] + matriz[k][j] < matriz[i][j])
                    matriz[i][j] = matriz[i][k] + matriz[k][j];
            }
        }
    }

    //Achando maior menor
    int maior, maiorMenor = INF;
    for(i = 0; i < nCidades; i++){
        maior = 0;
        for(j = 0; j < nCidades; j++){
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
        }

        if(maiorMenor > maior){
            maiorMenor = maior;
        }
    }

    printf("%d\n", maiorMenor);

    return(0);
}