#include <iostream>

using namespace std;

bool auxi(int n, int i)
{
    if(n ==i)
    {
        return 1;
    }
    else if(n%i == 0)
    {
        return 0;
    }
    else
    {
        return auxi(n,i+1);
    }

}

bool ehPrimo(int n)
{

    return auxi(n,2);

}

int main()
{
    cout<<"Digite o número: ";
    cin>>n;
    cout<<ehPrimo(n)<<endl;
    return 0;
}
