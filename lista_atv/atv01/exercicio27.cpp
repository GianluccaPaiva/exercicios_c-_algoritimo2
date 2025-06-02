#include <iostream>
using namespace std;

long int numDigitos(int n){
    if(n<10) return 1;
    return 1+numDigitos(n/10);
}

int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;

    if(n < 0) {
        cout << "Erro: o numero deve ser positivo." << endl;
        return 1;
    }

    cout << "Numero de digitos em " << n << " = " << numDigitos(n) << endl;
    return 0;
}