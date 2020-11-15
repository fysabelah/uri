#include<iostream>

using namespace std;

int main(){
	float intervalo;
	
	cin >> intervalo;
	
	if(intervalo >= 0 && intervalo <= 25) cout << "Intervalo [0,25]\n";
	else{
		if(intervalo > 25 && intervalo <= 50) cout << "Intervalo (25,50]\n";
		else{
			if(intervalo > 50 && intervalo <= 75) cout << "Intervalo (50,75]\n";
			else{
				if(intervalo > 75 && intervalo <= 100) cout << "Intervalo (75,100]\n";
				else cout << "Fora de intervalo\n";
			}
		}
	}
	
	return(0);
}
