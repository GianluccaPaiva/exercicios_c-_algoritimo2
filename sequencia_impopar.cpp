#include <iostream>
using namespace std;

int seq(int n, int *par, int *impar){
    if(n==1){
        return 1;
    }
    else if(n%2==0){
        cout << n << " ";
        *par+=1;
        return seq(n/2, par, impar);
    }
    else{
        cout << n << " ";
        *impar+=1;
        return seq((3*n)+1, par, impar);
    }
}

int main()
{
    int p=0, i=0;
    int *par = &p, *impar = &i;
    seq(13, par, impar);
    cout << endl;
    cout << p+i;
    return 0;
}
