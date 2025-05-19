#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc)
{
    if(a<=b)
    {
        cout<<a<<" ";
        imprimeIntervalo(a+inc,b,inc);
    }
}
int main()
{
    int n,m,inc;
    cout<<"Digite a sequência: primeiro numero, segundo numero e incremento: ";
    cin>>n>>m>>inc;
    imprimeIntervalo(n,m,inc);
    return 0;
}
