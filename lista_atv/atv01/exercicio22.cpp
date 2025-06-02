#include <iostream>
using namespace std;

float* calculaSoma(int n, float vetA[], float vetB[]){
    float *result = new float [n];
    for(int i = 0; i<n;i++){
        *(result+i) = *(vetA+i) + vetB[i];
    }
    return result;
}

void preencherVetor(float *vet, int n){
    if(n>0){
        preencherVetor(vet,n-1);
        cin>>*(vet+n-1);
    }
}

int main(){
    int n;
    cin >> n;
    float *vetA = new float [n];
    float *vetB = new float [n];
    preencherVetor(vetA, n);
    preencherVetor(vetB, n);
    float *vetC = calculaSoma(n, vetA, vetB);
    for(int i = 0; i<n; i++){
        cout << *(vetC+i) << " ";
    }

    delete [] vetA;
    delete [] vetB;
    delete [] vetC;
}