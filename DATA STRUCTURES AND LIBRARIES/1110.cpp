#include<iostream>
#include<vector>

using namespace std;

int main(){
    int numero, i;
    vector <int> base;

    cin >> numero;

    while (numero){
        for(i = 1; i <= numero; i++)
            base.push_back(i);
        
        int aux;

        cout << "Discarded cards: ";

        while(numero >= 2 && base.size() > 1){
            cout << base.front();
            
            base.erase(base.begin());

            aux = base.front();
            base.erase(base.begin());
            base.push_back(aux);

            if(base.size() >= 2) cout << ", ";

            numero--;
        }
        
        cout << "\nRemaining card: " << base.front() << "\n";

        base.clear();
        
        cin >> numero;
    }
    

    return(0);
}