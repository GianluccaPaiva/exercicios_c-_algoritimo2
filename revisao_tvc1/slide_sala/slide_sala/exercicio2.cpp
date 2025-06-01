#include <iostream>

using namespace std;

int * multiplos(int vet[], int n, int d, int *s,int *t){
    *s = 0;
    *t = 0;
    for(int i =0;i<n;i++){
        if(vet[i]%d == 0){
            (*t)++; 
            *s += vet[i];
        }
    }
    if(*t == 0){
        return NULL;
    }else{
        int *novo_vet = new int[*t];
        int j = 0;
        for (int i = 0; i < n; i++){
            if(vet[i] % d == 0){
                novo_vet[j] = vet[i];
                j++;
            }
        }
        return novo_vet;
    }

}

int main() {
    int vet[] = {2, 5, 8, 10, 13, 15, 20};
    int n = 7, d = 5;
    int soma, tam;

    int* resultado = multiplos(vet, n, d, &soma, &tam);

    if (resultado != NULL) {
        cout<< "Múltiplos de " << d << " encontrados no vetor: ";
        for (int i = 0; i < tam; i++) {
            cout << resultado[i] << " ";
        }
        cout<<"\nSoma dos múltiplos: "<< soma;
        delete [] resultado; 
    } else {
        cout << "Nenhum múltiplo de " << d << " encontrado no vetor.\n";
    }

    return 0;
}
