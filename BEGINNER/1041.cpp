#include<iostream>

using namespace std;

int main(){
	float point1, point2;
	
	cin >> point1 >> point2;
	
	if(point1 == 0 and point2 == 0) cout << "Origem\n";
	else{
		if(point1 == 0) cout << "Eixo Y\n";
		else{
			if(point2 == 0) cout << "Eixo X\n";
			else{
				if(point1 > 0 and point2 > 0) cout << "Q1\n";
				else{
					if(point1 < 0 and point2 > 0) cout << "Q2\n";
					else{
						if(point1 < 0 and point2 < 0) cout << "Q3\n";
						else cout << "Q4\n";
					}
				}
			}
		}
	}
	
	return(0);
}