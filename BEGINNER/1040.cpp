#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4, media, sub;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	media = (2*n1 + 3*n2 + 4*n3 + n4)/10;
	
	cout << fixed;
	cout.precision(1);
	
	cout << "Media: " << media << endl;
	
	if(media >= 5 and media <= 6.9){
		cin >> sub;
		
		cout << "Aluno em exame.\n";
		cout << "Nota do exame: " << sub <<endl;
		
		media = (media + sub)/2;
		
		if(media >= 5)cout << "Aluno aprovado.\n";
		else cout << "Aluno reprovado.\n";
		
		cout << "Media final: " << media << endl;
	}
	else{
		if(media >= 7) cout << "Aluno aprovado.\n";
		else cout << "Aluno reprovado.\n";
	}
	
	return(0);
}