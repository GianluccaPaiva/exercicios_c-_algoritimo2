#include <iostream>
using namespace std;


float calculaMedia(int n, float *vet){
    float media = 0;
    for(int i = 0; i<n; i++){
        media += vet[i];
    }
    return media/n;
}

int main(){
    int n;
    cin>>n;
    float *vet = new float [n];
    for(int i = 0; i<n; i++){
        cin>>vet[i];
    }
    cout<< calculaMedia(n, vet )<<endl;
    delete [] vet;
}