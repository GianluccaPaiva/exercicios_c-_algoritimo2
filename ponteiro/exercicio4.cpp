#include <iostream>
using namespace std;
#define TAM 10
bool func(int tam, int vet[], int *par, int *imp, int *neg){
    for(int i = 0; i<tam; i++){
        if(*(vet+i) < 0)(*neg)++;
        else if (*(vet+i)%2 == 0) (*par)++;
        else (*imp)++;
    }
    if (*neg > 0){
        return true;
     }else{
        return false;
     }
}

int main() {
    int negativos = 0, pares = 0, impares = 0;
    int vet[TAM] = {1, 2, -3, 4, -5, 6, -7, 8, 9, -10};
    cout<<func(TAM, vet, &pares, &impares, &negativos)<<endl;
    cout<<negativos<<endl;
    cout<<pares<<endl;
    cout<<impares<<endl;
    cout<<endl;
    return 0;
}