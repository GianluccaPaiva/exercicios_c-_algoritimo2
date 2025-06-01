#include <cmath>
#include <iostream>

using namespace std;

float avalia(float x, int coefs[], int n){
    if(n==1){
        return coefs[0];
    }
    return coefs[0] * pow(x,n-1) + avalia(x, coefs+1, n-1);
}

int main(){
    int n, coefs[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> coefs[i];
    }
    float x;
    cin >> x;
    cout << avalia(x, coefs, n) << endl;
    return 0;
}