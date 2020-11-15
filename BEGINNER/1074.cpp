#include<iostream>

using namespace std;

void pos(int);

int main(){
    int num, max, i;
    
    cin >> max;
    
    for(i = 0; i < max; i++){
        cin >> num;
        
        if(num == 0) cout << "NULL" << endl;
        else{
            if(num % 2 == 0){
                cout << "EVEN";
                pos(num);
            }
            else{
                cout << "ODD";
                pos(num);
            }
        }
    }
    
    return(0);
}

void pos(int num){
    if(num < 0) cout << " NEGATIVE" << endl;
    else cout << " POSITIVE" << endl;
}