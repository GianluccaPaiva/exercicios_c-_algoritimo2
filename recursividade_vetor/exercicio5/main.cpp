#include <iostream>

using namespace std;

int preencheVet(int vet[], int n){
    if(n == 1){
        vet [n] = 1;
    }
    vet[n-1] = n*n+1;
    preencheVet(vet, n-1);
}

int main()
{
    int n;
    cin>>n;
    int *v = new int [n];
    cout<<preencheVet(v, n);
    for(int i = 0; i<n; i++){
        cout<< v[i]<<edl;
    }
    delete [] v;
    return 0;
}
