#include <iostream>
using namespace std;


// a partir do que for diferente retorna false se nao e cruzar o inicio com o fim/2 retorna true
bool auxiPalindromo(char a[], int i, int n) {
    if(a[i]!= a[n-1]) return false;
    if(i>=n/2) return true;
    return auxiPalindromo(a, i+1, n-1);
}
bool ehPalindromo(char a[], int n){
    return auxiPalindromo(a,0,n);
}

int main() {
    const int MAX = 100;
    char a[MAX];
    cout << "Digite uma palavra: ";
    cin >> a;
    
    int n = 0;
    while (a[n] != '\0') {
        n++;
    }
    
    if (ehPalindromo(a, n)) {
        cout << "A palavra eh um palindromo." << endl;
    } else {
        cout << "A palavra nao eh um palindromo." << endl;
    }
    
    return 0;
}