#include <iostream>

using namespace std;

void leitura(int vet[], int n){
    if(n<=0){
        return;
    }
    leitura(vet, n-1);
    cin>> vet[n-1];
}

void aux_inverte(int vet[], int n, int i){
    if(i>n){
        return;
    }
    int troca = vet[i];
    vet[i] = vet[n-1];
    vet[n-1] = troca;
    aux_inverte(vet, n-1, i+1);
}

void inverte(int vet[], int n){
       return aux_inverte(vet, n, 0);
}

int main(){
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

    inverte(vet, n);

    cout << "Vetor invertido: ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    delete[] vet; 
    return 0;
}