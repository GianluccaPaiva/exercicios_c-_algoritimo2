#include <iostream>
using namespace std;

void substitui_menor_auxiliar(int val, int *vet, int n, int i){
    if(i== n) return;
    if(vet[i] < val) {
        vet[i] = val;
        return;
    }
    substitui_menor_auxiliar(val, vet, n, i+1);
}

void substitui_menor(int val, int *vet, int n){
    if(n == 0) return ;
    substitui_menor_auxiliar(val, vet, n, 0);
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
    int val;
    cout << "Digite o valor a ser substituido: ";
    cin >> val;
    substitui_menor(val, vet, n);
    cout << "Vetor apos a substituicao: ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    delete[] vet;
    return 0;
}