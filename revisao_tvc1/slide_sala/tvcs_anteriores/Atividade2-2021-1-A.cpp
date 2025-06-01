#include <iostream>

using namespace std;

void leitura(int vet[], int n){
    if(n <= 0){
        return;
    }
    leitura(vet, n-1);
    cin >> vet[n-1]; //faz cin no empilhamento
}

bool busca(int val, int vet[], int n){
    if(n<=0){
        return false;
    }
    if(vet[n-1] ==val){
        return true;
    }
    return busca(val, vet, n-1);
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tamanho do vetor deve ser maior que zero." << endl;
        return 1;
    }

    int* vet = new int[n];
    cout << "Digite os elementos do vetor: ";
    leitura(vet, n);

    int val;
    cout << "Digite o valor a ser buscado: ";
    cin >> val;

    if (busca(val, vet, n)) {
        cout << "Valor encontrado no vetor." << endl;
    } else {
        cout << "Valor nao encontrado no vetor." << endl;
    }

    delete[] vet; 
    return 0;
}