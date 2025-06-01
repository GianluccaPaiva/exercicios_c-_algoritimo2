#include <iostream>

using namespace std;

bool* maiorQueProximo(int vet[], int n, int *t) {
    if (vet == nullptr || t == nullptr) {
        return nullptr;
    }
    *t = n;
    bool *t_or_f_vet = new bool[*t];
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && vet[i] > vet[i + 1]) {
            t_or_f_vet[i] = true;
        } else {
            t_or_f_vet[i] = false;
        }
    }
    return t_or_f_vet;
}

int main() {
    int vet[] = {2, 5, 8, 10, 13, 15, 20};
    int n = 7;
    int tam;

    bool* resultado = maiorQueProximo(vet, n - 1, &tam);

    if (resultado != nullptr) {
        cout << "Elementos maiores que o próximo: ";
        for (int i = 0; i < tam; i++) {
            if (resultado[i]) {
                cout << resultado[i] << " ";
            }
        }
        cout << endl;
        delete[] resultado;
    } else {
        cout << "Erro: resultado é nulo." << endl;
    }

    return 0;
}