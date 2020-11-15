#include<stdio.h>
#include<stdlib.h>

int verifica(const void*, const void*);

int main(){
    unsigned long long int numero, i, j, quant;

    while(scanf("%llu", &numero) && numero){
        unsigned long long int vetor[numero];

        for(i = 0; i < numero; i++){
            scanf("%llu", &vetor[i]);
        }

        qsort(vetor, numero, sizeof(unsigned long long int), verifica);

        for(i = 0; i < numero; i++){
            j = i + 1;
            quant = 1;

            while(vetor[i] == vetor[j]){
                quant++;
                j++;
            }

            if(quant % 2 != 0){
                printf("%llu\n", vetor[i]);
                break;
            }
            else i += quant - 1;
        }
    }

    return(0);
}

int verifica(const void* n1, const void* n2){
    if(*(int*)n1 < *(int*)n2) return(-1);
    if(*(int*)n1 == *(int*)n2) return(0);
    if(*(int*)n1 > *(int*)n2) return(1);
}