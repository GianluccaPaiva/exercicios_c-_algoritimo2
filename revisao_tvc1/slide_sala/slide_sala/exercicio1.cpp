#include <iostream>

using namespace std;

void q1(){
    int n = 8;
    int vet[n] = {5,10,15,20,25,30,35,40};
    int *p = vet;
    p = p + 4;
    p +=1;
    int diferenca = p - &vet[1];
    cout << "A diferença entre o endereço de p e o endereço de vet[1] é: " << diferenca << endl;
    p = &vet[n-1];
    cout << "O valor apontado por p é: " << *p << endl;
    p = &vet[0];
    cout<< *(p+3)<<endl;
    p = &vet[2];
    cout<< *(p+2) << endl;
}

int main() {
    q1();
    return 0;
}