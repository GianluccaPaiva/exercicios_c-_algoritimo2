#include <iostream>
using namespace std;

bool todosPositivos(int vet[], int n) {
    if (n == 0) return true;
    if (vet[n-1] <= 0) return false;
    return todosPositivos(vet, n - 1);
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int *vet = new int[n];
    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    if (todosPositivos(vet, n)) {
        cout << "Todos os elementos do vetor sao positivos." << endl;
    } else {
        cout << "Nem todos os elementos do vetor sao positivos." << endl;
    }
    delete[] vet;
    return 0;
}