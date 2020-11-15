#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int rapido, lento;
    
    cin >> rapido >> lento;
    
    cout << ceil(lento/((lento-rapido)+0.0)) << "\n";
    
    return 0;
}