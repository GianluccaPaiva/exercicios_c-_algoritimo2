#include <iostream>
using namespace std;

void menorAux(int vet[],  int *menor, int n){
    if(n>=1){
        if(vet[n-1]<*menor){
            *menor = vet[n-1];
        }
        menorAux(vet, menor,n-1);
    }
}

int menor(int vet[], int n){
    int menor = 10e12;
    menorAux(vet, &menor,n);
    return menor;
}

int main()
{
    int n =3;
    int vet[n] = {1,2,3};
    cout << menor(vet,n) << endl;
    return 0;
}
