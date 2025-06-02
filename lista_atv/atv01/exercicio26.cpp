#include <iostream>
using namespace std;

int soma(int a, int b){
    if(a>b) return 0;
    return a+soma(a+1, b);
}

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros (a < b): ";
    cin >> a >> b;
    
    if(a >= b) {
        cout << "Erro: o primeiro numero deve ser menor que o segundo." << endl;
        return 1;
    }
    
    cout << "Soma de " << a << " a " << b << " = " << soma(a, b) << endl;
    return 0;
}