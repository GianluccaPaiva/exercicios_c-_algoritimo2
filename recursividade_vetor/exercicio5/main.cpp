#include <iostream>

using namespace std;

int preencheVet(int vet[], int n){
    if(n == 1){
        vet [n-1] = 1;
        return 1;
    }
    vet[n-1] = n*n+1;
    return vet[n-1] + preencheVet(vet, n-1);
}

int main()
{
    int n;
    cout<<"tamanho do vetor: ";
    cin>>n;
    int *v = new int [n];
    cout<<"Soma: "<<preencheVet(v, n)<<endl;
    for(int i = 0; i<n; i++){
        cout<< v[i]<<endl;
    }
    delete [] v;
    return 0;
}
