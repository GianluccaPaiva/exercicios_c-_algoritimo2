#include <iostream>
using namespace std;

float *alocaVetorF(int n){
    return new float[n];
}

double *alocaVetorD(int n){
    return new double[n];
}

int main() {
    float* vetF;
    double* vetD;

    vetF = alocaVetorF(100);
    vetD = alocaVetorD(1000);
   //caso ponteiro vazio => == nullptr
    if (vetF != nullptr) {
        cout << "Vetor de float alocado com sucesso!" << endl;
        delete[] vetF;  
    }

    if (vetD != nullptr) {
        cout << "Vetor de double alocado com sucesso!" << endl;
        delete[] vetD;  
    }

    return 0;
}
