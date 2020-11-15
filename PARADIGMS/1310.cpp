//Soma Máxima em um Intervalo
#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int max_sum(vector<int>);

int main(){
    int dias, custo, receita;
    vector<int> semana;
    
    while(cin >> dias){
        cin >> custo;
        
        while(dias--){
            cin >> receita;
            semana.push_back(receita - custo);
        }
        
        cout << max_sum(semana) << "\n";
        
        semana.clear();
    }
    
    return(0);
}

int max_sum(vector<int> s){
	
	int resp=0, maior=0;
	
	for(int i=0;i<s.size();i++){
		
		maior=max(0,maior+s[i]);
		
		resp=max(resp,maior);
	}
	
	return resp;
}