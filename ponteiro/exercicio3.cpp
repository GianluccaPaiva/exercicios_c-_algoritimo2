#include <iostream>
using namespace std;

// Este programa demonstra o uso de ponteiros e operadores de desreferenciamento em C++.
// Ele contém três funções que manipulam um array de inteiros e imprimem os resultados.
void func1(){
    int mat[3]= {1,10,100};
    for(int i=0;i<3;i++){
        cout<<*(mat+i)<<endl;
    }
    cout<<endl;
}

// A função func2 imprime os endereços de memória dos elementos do array mat.
// O operador de endereço (&) é usado para obter o endereço de um elemento específico.
void func2(){
    int mat[3]= {1,10,100};
    for(int i=0;i<3;i++){
        cout<<(mat+i)<<endl;
    }
    cout<<endl;
}

// A função func3 demonstra o uso do operador de incremento (++) em um ponteiro.
// O ponteiro p é incrementado após cada impressão, o que resulta em valores diferentes sendo impressos.
void func3(){
    
    int mat[3]= {1,10,100}; int *p = mat;
    for(int i=0;i<3;i++){
        cout<<(*p)++<<endl;
    }
    cout<<endl;
}

int main() {
    cout<<"func1"<<endl;
    func1();
    cout<<"func2"<<endl;
    func2();
    cout<<"func3"<<endl;
    func3();
    cout<<endl;

    return 0;
}