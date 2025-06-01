#include <iostream>

using namespace std;

int * removeVal(int vet[], int n, int val, int *t){
    int count =0;
    for (int i = 0; i<0;i++){
        if(vet[i] !=val){
            count ++;
        }
    }
    *t = count;
    if(count == 0){
        return NULL;
    } else {
        int *nvet = new int [*t];
        int j = 0;
        for(int i =0; i<n; i++){
            if(vet[i]!=val){
                nvet[j] = vet[i];
                j++;
            }
        }
        return nvet;
    
    }

}


int main() {
    int vet[] = {2, 5, 8, 10, 13, 15, 20};
    int n = 7, val = 5;
    int tam;

    int* resultado = removeVal(vet, n, val, &tam);

    if (resultado != NULL) {
        cout << "Vetor após remoção do valor " << val << ": ";
        for (int i = 0; i < tam; i++) {
            cout << resultado[i] << " ";
        }
        cout << endl;
        delete[] resultado; 
    } else {
        cout << "Nenhum elemento diferente de " << val << " encontrado no vetor.\n";
    }

    return 0;
}