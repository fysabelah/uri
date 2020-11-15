#include <iostream>

using namespace std;

int main(){
    int h1, m1, h2, m2;
    
    while(cin >> h1 >> m1 >> h2 >> m2, h1 || m1 || h2 || m2){
        if(h2 > h1)
            cout << (h2 * 60 + m2) - (h1 * 60 + m1) << "\n";
        else{
            if(h1 == h2){
                if(m1 > m2)
                    cout << 1440 - (m1 - m2) << "\n";
                else
                    cout << m2 - m1 << "\n";
            }
            else{
                cout << (1440 - h1 * 60 - m1) + (h2 * 60 + m2) << "\n";
            }
        }
    }   
    
    return(0);
}