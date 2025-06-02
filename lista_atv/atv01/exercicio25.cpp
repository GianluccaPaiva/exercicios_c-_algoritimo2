#include <iostream>
using namespace std;

int soma(int n){
    if(n<=0) return 0;
    return n+soma(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << "Soma de 1 a " << n << " = " << soma(n) << endl;
}