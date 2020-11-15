#include<stdio.h>
#include<string.h>

typedef struct{
    int id;
    char nome[30];
}Nomes;

int verificarInsere(Nomes[], int, char[]);
void Union(int[], int, int);
int find(int[], int);

int main(){
    int nPessoas, nRelacoes, i, j, ind1, ind2;
    char nome1[30], nome2[30], rel[20];

    scanf("%d %d", &nPessoas, &nRelacoes);

    Nomes familia[nPessoas];
    int relacoes[nPessoas];

    for(i = 0; i < nPessoas; i++){
        familia[i].id = -1;
        relacoes[i] = i;
    }

    //Inserindo
    for(i = 0; i < nRelacoes; i++){
        scanf("%s %s %s", nome1, rel, nome2);

        if(i == 0){
            familia[0].id = 0;
            strcpy(familia[0].nome, nome1);

            familia[1].id = 1;
            strcpy(familia[1].nome, nome2);

            Union(relacoes, 0, 1);
        }
        else{
            ind1 = verificarInsere(familia, nPessoas, nome1);
            ind2 = verificarInsere(familia, nPessoas, nome2);
            Union(relacoes, ind1, ind2);

        }
    }

    //Colocando os parentescos
    for(i = 0; i < nPessoas; i++){
        for(j = 0; j < nPessoas; j++){
            ind1 = find(relacoes, relacoes[i]);
            ind2 = find(relacoes, relacoes[j]);

            if(ind1 == ind2) relacoes[i] = relacoes[j] = ind1;
        }
    }

    //Somando os parentes
    ind1 = j = ind2 = 0;
    for(i = 0; i < nPessoas; i++){
        ind2 = relacoes[i];
        relacoes[i] = -1;

        if(ind2 != -1){
            ind1++;
            for(j = i+1; j < nPessoas; j++){
                if(relacoes[j] != -1 && ind2 == relacoes[j]) relacoes[j] = -1;
            }
        }
    }

    printf("%d\n", ind1);

    return(0);
}

int verificarInsere(Nomes f[], int tam, char nome[]){
    int i;
    for(i = 0; i < tam; i ++){
        if(strcmp(f[i].nome, nome) == 0) return(i);
        if(f[i].id == -1) break;
    }

    f[i].id = i;
    strcpy(f[i].nome, nome);
    return(i);
}

// A utility function to find the subset of an element i
int find(int parent[], int i)
{
    if (parent[i] != i)
        parent[i] = find(parent, parent[i]);

    return parent[i];
}

// A utility function to do union of two subsets
void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    if(xset!= yset){
       parent[xset] = yset;
    }
}