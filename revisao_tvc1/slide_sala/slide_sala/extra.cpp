#include <iostream>

using namespace std;

int seqNum(int n){
    if(n<0){
        return -1;
    }
    if(n ==0) {
        return 1;
    }
    if(n ==1){
        return 2;
    }
    return seqNum(n-1) + 2* seqNum(n-2);

}

int main(){
   cout << "Digite um numero inteiro positivo: ";
   int numero;
    cin >> numero;
    if (numero < 0) {
         cout << "Por favor, digite um numero inteiro positivo." << endl;
         return 1;
    }
    int resultado = seqNum(numero);
    cout << "O numero " << numero << " na sequencia eh: " << resultado << endl;
    return 0;

}