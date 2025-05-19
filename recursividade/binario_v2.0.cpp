#include <iostream>
using namespace std;

void binario(int n){
    if(n>0){
        binario(n/2);
        cout << n%2;
    }
}

int main()
{
    binario(8);
    return 0;
}
