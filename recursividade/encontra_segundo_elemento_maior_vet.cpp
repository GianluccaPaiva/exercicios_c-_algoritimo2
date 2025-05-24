#include <iostream>
using namespace std;

void  seg_maior(int *vet, int n, int *maior, int *segundo_maior){
    if(n==2){
        if(vet[n-2]>vet[n-1]){
            *maior = vet[n-2];
            *segundo_maior = vet[n-1];
        } else {
            *maior = vet[n-1];
            *segundo_maior = vet[n-2];
        }
        return;
    }
    if(vet[n-1] > *maior){
        *segundo_maior = *maior;
        *maior = vet[n-1];
    }
    seg_maior(vet, n-1, maior, segundo_maior);
}

int segMaior_principal(int v[], int n){
    int maior = -1;
    int segundo_maior =-1;
    seg_maior(v, n, &maior, &segundo_maior);
    return segundo_maior;
}

int main(){
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int *vet = new int[n];
    cout << "Digite os elementos do vetor: ";
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    int segundo_maior = segMaior_principal(vet, n);
    cout << "O segundo maior elemento eh: " << segundo_maior << endl;
    delete[] vet;
    return 0;
}