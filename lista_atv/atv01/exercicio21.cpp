#include <iostream>
using namespace std;

float *alocaVetorF(int n){
    return new float[n];
}

double *alocaVetorD(int n){
    return new double[n];
}

void preencherVetorF(float *vet, int n){
    if(n>0){
        preencherVetorF(vet, n-1);
        cin >> vet[n-1];
    }
}
void preencherVetorD(double *vet, int n){
    if(n>0){
        preencherVetorD(vet, n-1);
        cin>>vet[n-1];
    }
}

void imprimeVetorF(float *vet, int n){
    if(n>0){
        imprimeVetorF(vet, n-1);
        cout << vet[n-1] << " ";
    }
}

void imprimeVetorD(double *vet, int n){
    if(n>0){
        imprimeVetorD(vet, n-1);
        cout << vet[n-1] << " ";
    }
}
int main() {
    float* vetF;
    double* vetD;
    int n1 = 3, n2 = 4;
    vetF = alocaVetorF(n1);
    vetD = alocaVetorD(n2);
   //caso ponteiro vazio => == nullptr
    if (vetF != nullptr) {
        cout << "Vetor de float alocado com sucesso!" << endl;
        preencherVetorF(vetF, n1);
        imprimeVetorF(vetF, n1);
        cout << endl; 
        delete[] vetF;  
    }

    if (vetD != nullptr) {
        cout << "Vetor de double alocado com sucesso!" << endl;
        preencherVetorD(vetD, n2);
        imprimeVetorD(vetD, n2);
        cout << endl;
        delete[] vetD;  
    }

    return 0;
}
