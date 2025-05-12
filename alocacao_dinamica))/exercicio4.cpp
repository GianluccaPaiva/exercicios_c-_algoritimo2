#include <iostream>

using namespace std;

int* redimensiona(int vet[], int tam,int novo){
    if(tam<= novo){
        return vet;
    }
    else{
        int *new_novo = new int [novo];
        for(int i = 0; i<novo; i++){
            if(i<=tam){
                *(new_novo+i) = *(vet+i);
            }
            else{
                *(new_novo +i) = 0;
            }
        }
        return new_novo;
    }
}

int main()
{
    int tam, novo, tamanho;
    cin>> tam >> novo;
    int *vet = new int [tam];
    for(int i = 0; i< tam;i++){
        cin>>*(vet+i);
    }
    int *new_voce = redimensiona(vet, tam, novo);
    if(tam<= novo){
        tamanho = tam;
    }
    else{
        tamanho = novo;
    }
    cout<<endl;
    for(int j = 0; j<tamanho; j++){
        cout<<*(new_voce+j)<<endl;
    }
    delete [] vet;
    delete [] new_voce;
}
