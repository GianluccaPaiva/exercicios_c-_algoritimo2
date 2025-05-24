#include <iostream>
using namespace std;

bool busca_binaria(int *vet, int n, int chave, int esq, int dir) {
    if (esq > dir) return false; 
    int meio = (esq + dir) / 2;
    if (vet[meio] == chave) return true; 
    if (vet[meio] < chave) {
        return busca_binaria(vet, n, chave, meio + 1, dir);
    } else {
        return busca_binaria(vet, n, chave, esq, meio - 1); 
    }
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int *vet = new int[n];
    cout << "Digite os elementos do vetor (ordenados): ";
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    int chave;
    cout << "Digite a chave a ser buscada: ";
    cin >> chave;
    if (busca_binaria(vet, n, chave, 0, n - 1)) {
        cout << "Chave encontrada!" << endl;
    } else {
        cout << "Chave nao encontrada!" << endl;
    }
    delete[] vet;
    return 0;
}