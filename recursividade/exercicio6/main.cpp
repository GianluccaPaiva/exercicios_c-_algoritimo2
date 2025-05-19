#include <iostream>

using namespace std;

float auxi(int n, int k){
    if(k>n){
        return 0;
    }
    else{
        return 1.0/k + auxi(n,k+1);
    }
}

float harmonico(int n){
    return auxi(n,1);
}

int main()
{
    cout << harmonico(2) << endl;
    return 0;
}
