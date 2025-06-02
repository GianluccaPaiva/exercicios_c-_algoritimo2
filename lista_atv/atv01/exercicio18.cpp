#include <iostream>
using namespace std;

int main(){
    int n;
    float media = 0;
    cin>>n;
    float *vet = new float [ n ];
    for(int i = 0; i<n;i++){
        cin>>vet[i];
        media += vet[i];
    }

    media = media / n;
    cout<< media << endl;
    delete [] vet;
}