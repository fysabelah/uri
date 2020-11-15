#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, max, coelho = 0, rato = 0, sapo = 0, aux;
    char tip;
    
    cin >> max;
    
    for(i = 0; i < max; i++){
        cin >> aux >> tip;
        
        if(tip == 'C') coelho+=aux;
        if(tip == 'S') sapo+=aux;
        if(tip == 'R') rato+=aux;
    }
    
    cout << "Total: " << coelho+sapo+rato << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (coelho * 100) / (coelho+sapo+rato+0.0) << " %" << endl;
    cout << "Percentual de ratos: " << (rato * 100) / (coelho+sapo+rato+0.0) << " %" << endl;
    cout << "Percentual de sapos: " << (sapo * 100) / (coelho+sapo+rato+0.0) << " %" << endl;
    
    return(0);
}