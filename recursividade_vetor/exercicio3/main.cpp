#include <iostream>

using namespace std;

bool negativo(int vet[], int n)
{
    if(n>=1)
    {
        if(vet[n-1]<0)
        {
            return true;
        }
        return negativo(vet, n-1);
    }
    return false;
}

int main()
{
    int n =3;
    int vet [n] = {-1,-2,-3};
    cout << negativo(vet,n)<< endl;
    return 0;
}
