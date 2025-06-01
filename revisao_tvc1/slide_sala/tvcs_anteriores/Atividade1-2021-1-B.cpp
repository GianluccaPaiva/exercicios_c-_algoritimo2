#include <iostream>

using namespace std;

void troca(int *vetA, int *vetB, int tam){
    int troca;
    for(int i =0; i<tam; i++){
        troca = *(vetA+i);
        *(vetA+i) = *(vetB+i);
        *(vetB+i) = troca;
    }
}

int main(){
    int tam;
    cout << "Digite o tamanho dos vetores: ";
    cin >> tam;

    if (tam <= 0) {
        cout << "Tamanho deve ser maior que zero." << endl;
        return 1;
    }

    int *vetA = new int[tam];
    int *vetB = new int[tam];

    cout << "Digite os elementos do vetor A: ";
    for(int i = 0; i < tam; i++){
        cin >> *(vetA + i);
    }

    cout << "Digite os elementos do vetor B: ";
    for(int i = 0; i < tam; i++){
        cin >> *(vetB + i);
    }

    troca(vetA, vetB, tam);

    cout << "Vetor A apos a troca: ";
    for(int i = 0; i < tam; i++){
        cout << *(vetA + i) << " ";
    }
    cout << endl;

    cout << "Vetor B apos a troca: ";
    for(int i = 0; i < tam; i++){
        cout << *(vetB + i) << " ";
    }
    cout << endl;

    delete[] vetA;
    delete[] vetB;

    return 0;
}