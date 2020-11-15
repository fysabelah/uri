#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float a, b, c;
	
	cin >> a >> b >> c;
	
	cout << fixed;
	cout.precision(1);
	
	if(abs(b-c) < a and a < (b+c)){
	    if(abs(a-c) < b and b < (a+c)){
	        if(abs(a-b) < c and c < (a+b)){
	            cout << "Perimetro = " << a+b+c << endl;
	        }
	    }
	}
	else cout << "Area = " << ((a+b)*c)/2 << endl;
	
	return(0);
}