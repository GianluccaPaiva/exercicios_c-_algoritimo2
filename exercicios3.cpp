#include <iostream>

using namespace std;

int* indicesPares(int vet[], int n){
    int qtd;
    if(n%2 != 0){
        qtd = (n/2)+1;
    }
    else{
        qtd = n/2;
    }
    int *pares = new int [qtd];
    int indice = 0;
    for(int i = 0; i<qtd; i ++){
        for(int j = indice; j<n; j++){
            if(j %2 == 0){
                pares[i] = vet[j];
                indice =j +1;
                break;
            }
        }
    }
    return pares;

}


int main()
{
    int n, qtd;
    cin>>n;
    int *vet = new int [n];
    for(int i = 0; i<n; i++){
        cin>>*(vet+i);
    }
    if(n%2 != 0){
        qtd = (n/2)+1;
    }
    else{
        qtd = n/2;
    }
    int *pares = indicesPares(vet, n);
    for(int j = 0;j<qtd; j++ ){
        cout<<*(pares+j);
    }
    delete [] pares;
    delete [] vet;
    return 0;
}
