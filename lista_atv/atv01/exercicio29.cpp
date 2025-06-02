#include <iostream>
using namespace std;

bool buscaBinariaAux(int vet[], int n, int x, int esq, int dir){
    if(esq > dir) return false;
    int meio = (esq+dir)/2;
    if(vet[meio] == x) return true;
    if(x<vet[meio]){
        return buscaBinariaAux(vet,n,x, esq,meio - 1);
    }
    if(x>vet[meio]){
        return buscaBinariaAux(vet,n,x,meio+1,dir);
    }
}
bool buscaBinaria(int vet[], int n, int x){
    int esq = 0, dir = n - 1;
    return buscaBinariaAux(vet, n, x, esq, dir);
}

int main(){
    int n =10;
    int vet[n] = {1, 2, 3,4,5,6,7,8,9,10};
    int x;
    cout << "Digite o numero a ser buscado: ";
    cin >> x;
    cout << "Resultado da busca binaria: ";
    cout<<buscaBinaria(vet, n, x);
    cout << endl;
}