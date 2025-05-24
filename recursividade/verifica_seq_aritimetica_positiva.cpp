#include <iostream>
using namespace std;

bool ehSeqAritPosiAux(int seq[], int n, int i, int r){
    if(i == n-1) return true; 
    if(seq[i+1] - seq[i] != r || r<=0) return false; 
    return ehSeqAritPosiAux(seq, n, i+1, r); 
}

bool ehSeqAritPosi(int seq[], int n){
    if(n < 2) return false; 
    int r = seq[1] - seq[0]; 
    if(r <= 0) return false;
    return ehSeqAritPosiAux(seq, n, 0, r); 
}

int main() {
    int n;
    cout << "Digite o tamanho da sequencia: ";
    cin >> n;
    int *seq = new int[n];
    cout << "Digite os elementos da sequencia: ";
    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }
    if(ehSeqAritPosi(seq, n)){
        cout << "A sequencia eh uma PA positiva." << endl;
    } else {
        cout << "A sequencia nao eh uma PA positiva." << endl;
    }
    delete[] seq;
    return 0;
}