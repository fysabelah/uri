#include<iomanip>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float n;

    cin >> n;

    cout << fixed << setprecision(1);
    cout << n/log(n) << " " << 1.25506 * n/log(n) << "\n";

    return(0);
}