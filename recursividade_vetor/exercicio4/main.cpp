#include <iostream>

using namespace std;

int iguais_auxi(int vet1[], int vet2[], int n, int i){
    if(i > n){
        return -1;
    }
    if(vet1[i]!=vet2[i]){
        return i;
    }
    else{
        return iguais_auxi(vet1,vet2,n,i+1);
    }
}

int iguais(int vet1[], int vet2[], int n){
    return iguais_auxi(vet1,vet2,n,0);
}

int main()
{
    int n =3;
    int *v1 = new int[n];
    int *v2 = new int[n];
    for(int i = 0; i<n; i++){
        cin>>*(v1+i)>>*(v2+i);
    }
    cout << iguais(v1,v2,n) << endl;
    delete [] v1;
    delete [] v2;
    return 0;
}
