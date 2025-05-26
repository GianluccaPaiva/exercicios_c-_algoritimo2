#include <iostream>

using namespace std;

void paresAux(int vet[], int *pares, int n)
{
    if(n>=1)
    {
        if(vet[n-1]%2 == 0)
        {
            *pares +=1;
        }
        paresAux(vet, pares, n-1);
    }
}

int pares(int vet[], int n)
{
    int paresTotais = 0;
    paresAux(vet,&paresTotais,n);
    return paresTotais;

}
int main()
{
    int n =3;
    int vet[n] = {2,2,5};
    cout << pares(vet, n) << endl;
    return 0;
}
