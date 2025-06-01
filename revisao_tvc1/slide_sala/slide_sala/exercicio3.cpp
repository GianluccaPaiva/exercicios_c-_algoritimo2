#include <iostream>

using namespace std;

int menorDigito(int n){
    if(n<10){
        return n;
    }
    
    int digito = n % 10;
    int menor = menorDigito(n / 10);
    
    if(digito<menor){
        return digito;
    } else {
        return menor;
    }
}

int main(){
    int numero;
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, digite um numero inteiro positivo." << endl;
        return 1;
    }

    int resultado = menorDigito(numero);
    cout << "O menor digito do numero " << numero << " e: " << resultado << endl;

    return 0;
}