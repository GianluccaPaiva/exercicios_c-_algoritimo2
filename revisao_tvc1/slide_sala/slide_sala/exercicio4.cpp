#include <iostream>

using namespace std;

int somaMultiplos(int vet[], int n, int d){
    if(n<=0){
        return 0;
    }
    if(vet[n-1]%d ==0){
        return vet[n-1]+ somaMultiplos(vet,n-1,d);
    }
    else{
        return somaMultiplos(vet,n-1,d);
    }
}

int main(){
    int vet[] = {2, 5, 8, 10, 13, 15, 20};
    int n = 7, d = 5;

    int resultado = somaMultiplos(vet, n, d);

    if (resultado > 0) {
        cout << "Soma dos múltiplos de " << d << " no vetor: " << resultado << endl;
    } else {
        cout << "Nenhum múltiplo de " << d << " encontrado no vetor.\n";
    }

    return 0;
}