//Kruskal
#include<stdio.h>
#include<stdio.h>

typedef struct{
    int peso, inicio, fim;
}Arestas;

typedef struct{
    int parent;
    int rank;
}Subconj;

int find(Subconj[], int);
void uni(Subconj[], int, int);
int KruskalMST(Arestas[], int, int);
int compararVertices(Arestas*, Arestas*);

int main(){
    int nJuncoes, nEstradas;

    while(scanf("%d %d", &nJuncoes, &nEstradas), nJuncoes && nEstradas){
        Arestas estradas[nEstradas];
        int total = 0, i;

        for(i = 0; i < nEstradas; i++){
            scanf("%d %d %d", &estradas[i].inicio, &estradas[i].fim, &estradas[i].peso);
            total += estradas[i].peso;
        }

        qsort(estradas, nEstradas, sizeof(Arestas), compararVertices);

        printf("%d\n", total - KruskalMST(estradas, nJuncoes,nEstradas));
    }

    return(0);
}

int compararVertices(Arestas *v1, Arestas *v2){
    return(v1->peso - v2->peso);
}

void bubbleSorte(Arestas est[], int tamanho){
    int i, j;
    Arestas aux;
    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho - i - 1; j ++){
            if(est[j].peso > est[j+1].peso){
                aux = est[j];
                est[j] = est[j+1];
                est[j+1] = aux;
            }
        }
    }
}

int find(Subconj sub[], int i){
    if(sub[i].parent != i){
        sub[i].parent = find(sub, sub[i].parent);
    }

    return(sub[i].parent);
}

void uni(Subconj sub[], int x, int y){
    int xroot = find(sub, x);
    int yroot = find(sub, y);

     if (sub[xroot].rank < sub[yroot].rank)
        sub[xroot].parent = yroot;
    else if (sub[xroot].rank > sub[yroot].rank)
        sub[yroot].parent = xroot;
    else
    {
        sub[yroot].parent = xroot;
        sub[xroot].rank++;
    }
}

int KruskalMST(Arestas est[], int vertices, int arestas){
    Arestas resultados[vertices];
    Subconj sub[vertices];
    int e = 0, i = 0, v, total = 0;

    for(v = 0; v < vertices; v++)
    {
        sub[v].parent = v;
        sub[v].rank = 0;
    }

    while(e < vertices-1 && i < arestas){
        Arestas aux = est[i++];

        int x = find(sub, aux.inicio);
        int y = find(sub, aux.fim);

        //Em caso de else a aresta é descartada
        if(x != y){
            resultados[e++] = aux;
            total += resultados[e-1].peso;
            uni(sub, x, y);
        }
    }

    return(total);
}