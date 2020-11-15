#include<iostream>

using namespace std;

void calcula_ajuste(float, float);

int main(){
    float salario;
    
    cin >> salario;
    
    if(salario >=0 and salario <= 400) calcula_ajuste(salario, 15);
    else{
        if(salario >= 400.01 and salario <= 800) calcula_ajuste(salario, 12);
        else{
            if(salario >= 800.01 and salario <= 1200) calcula_ajuste(salario, 10);
            else{
                if(salario >= 1200.01 and salario <= 2000) calcula_ajuste(salario, 7);
                else calcula_ajuste(salario, 4);
            }
        }
    }
    
    return(0);
}

void calcula_ajuste(float salario, float ajuste){
    float valor = salario * ajuste/100;
    
    salario+= valor;
    
    cout << fixed;
    cout.precision(2);
    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << valor << endl;
    cout.precision(0);
    cout << "Em percentual: " << ajuste << " %" << endl;
}