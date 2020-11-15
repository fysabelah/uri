/*MDC usando Euclides*/

#include<iostream>
#include<math.h>

using namespace std;

int MDC(int, int);
void ordena(int[], int);

int main(){
    int val[3];

    while(cin >> val[0] >> val[1] >> val[2]){
        ordena(val, 3);

        if(pow(val[2], 2) != pow(val[1], 2) + pow(val[0], 2)){
            cout << "tripla\n";
        }
        else{
            if(MDC(val[1], MDC(val[0], val[0])) == 1){
                cout << "tripla pitagorica primitiva\n";
            }
            else{
                cout << "tripla pitagorica\n";
            }
        }
    }

    return(0);
}

int MDC(int n1, int n2){
    if(n2 == 0) return(n1);
    else MDC(n2, n1 % n2);
}

void ordena(int val[], int tamanho){
    int i, j, aux, flag;

    for(i = 0; i < tamanho; i++){
        flag = 1;

        for(j = 0; j < tamanho - i - 1; j++){
            if(val[j] > val[j+1]){
                aux = val[j];
                val[j] = val[j+1];
                val[j+1] = aux;

                flag = 0;
            }
        }

        if(flag) break;
    }
}