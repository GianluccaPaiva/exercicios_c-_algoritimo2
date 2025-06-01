#include <iostream>

using namespace std;

int* redimensiona(int *vet, int tam, int novoTam){
    if(novoTam <= tam){
        return vet;
    }
    int *novo_vet = new int[novoTam];
    for(int i = 0; i<novoTam; i++){
        if(i<tam){
            novo_vet[i] = vet[i];
        } else {
            novo_vet[i] = 0;
        }
    }
    return novo_vet;
}

int main(){
    int tam;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    if (tam <= 0) {
        cout << "Tamanho do vetor deve ser maior que zero." << endl;
        return 1;
    }

    int *vet = new int[tam];
    cout << "Digite os elementos do vetor: ";
    for(int i = 0; i < tam; i++){
        cin >> vet[i];
    }

    int novoTam;
    cout << "Digite o novo tamanho do vetor: ";
    cin >> novoTam;

    if (novoTam <= 0) {
        cout << "Novo tamanho deve ser maior que zero." << endl;
        delete[] vet; 
        return 1;
    }

    vet = redimensiona(vet, tam, novoTam);

    cout << "Vetor redimensionado: ";
    for(int i = 0; i < novoTam; i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    delete [ ] vet;
    return 0;

}