#include<iostream>

using namespace std;

int MDC(int, int);

int main(){
    int m, lua1, lua2, lua3, mdc, mmc;

    while(cin >> m){
        cin >> lua1 >> lua2 >> lua3;

        mdc = MDC(lua1, lua2);
        mmc = (lua1 * lua2) / mdc;
        mdc = MDC(mmc, lua3);
        mmc = (mmc * lua3) /mdc;

        cout << mmc - m << "\n";
    }
    
    return(0);
}

int MDC(int n1, int n2){
    if(n2 == 0) return(n1);
    else MDC(n2, n1 % n2);
}