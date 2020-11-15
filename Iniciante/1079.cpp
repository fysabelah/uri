#include<iostream>
#define col 3

using namespace std;

int main(){
    int linha, i , j;
    
    cin >> linha;
    
    float mat[linha][col];
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }
    
    for(i = 0; i < linha; i++){
        j = 0;
        cout << fixed;
        cout.precision(1);
        cout << (mat[i][j]*2 + mat[i][j+1]*3 + mat[i][j+2]*5)/10 << endl;
    }
    
    return(0);
}