#include <iostream>

using namespace std;

float nHarmonico(int n){
    if(n ==1){
        return 1.0;
    }
    return 1.0/n + nHarmonico(n-1);
}
int main(){
    int numero;
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero < 1) {
        cout << "Por favor, digite um numero inteiro positivo." << endl;
        return 1;
    }

    float resultado = nHarmonico(numero);
    cout << "O " << numero << "º termo da serie harmonica e: " << resultado << endl;

    return 0;
}