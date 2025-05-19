#include <iostream>

using namespace std;

int fat(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n * fat(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fat(n);
    return 0;
}
