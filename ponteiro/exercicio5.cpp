#include <iostream>
using namespace std;
#define TAM 10

void trocaMaior(int vet[], int n, int *m){
    int temp;
    temp = *(vet-1);
    for(int i = 0; i<n;i++){
        if(*(vet+i)> *m){
            *m = *(vet+i);
        }
        
    }
    *vet = *m;//*vet equivale a vet[0] = *m;
    *(vet + (n-1)) = temp;//equivale a vet[n-1] = temp;

}

int main(){
    int tam = TAM;
    int vet[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maior = *vet;
    trocaMaior(vet, tam, &maior);
    cout<<maior<<endl;
    cout<<vet[0]<<endl;
    cout<<vet[tam-1]<<endl;
    
    
    return 0;
}
