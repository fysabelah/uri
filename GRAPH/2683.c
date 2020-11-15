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
void KruskalMST(Arestas[], int);
int compararVertices(Arestas*, Arestas*);

int main(){
    int i, nGalerias;

    scanf("%d", &nGalerias);

    Arestas rGalerias[nGalerias];

    for(i = 0; i < nGalerias; i ++){
        scanf("%d %d %d", &rGalerias[i].inicio, &rGalerias[i].fim, &rGalerias[i].peso);
    }

    qsort(rGalerias, nGalerias, sizeof(Arestas), compararVertices);

    KruskalMST(rGalerias, nGalerias);

    return(0);
}

int compararVertices(Arestas *v1, Arestas *v2){
    return(v1->peso - v2->peso);
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

void KruskalMST(Arestas est[], int arestas){
    Subconj sub1[arestas+1], sub2[arestas+1];
    int e = 0, i = 0, x, y, m = arestas, v, totalMa = 0, totalMe = 0;

    for(v = 0; v < arestas+1; v++)
    {
        sub1[v].parent = v;
        sub1[v].rank = 0;

        sub2[v].parent = v;
        sub2[v].rank = 0;
    }

    for(i = 0; i < arestas; i++){
        Arestas aux = est[i];
        Arestas aux2 = est[arestas - i -1];

        //Menor
        x = find(sub1, aux.inicio);
        y = find(sub1, aux.fim);

        if(x != y){
            totalMe += aux.peso;
            uni(sub1, x, y);
        }

        //Maior
        x = find(sub2, aux2.inicio);
        y = find(sub2, aux2.fim);

        if(x != y){
            totalMa += aux2.peso;
            uni(sub2, x, y);
        }
    }

    printf("%d\n%d\n", totalMa, totalMe);
}