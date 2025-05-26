#include <iostream>
using namespace std;

/*Desenvolver uma func ̧ao ̃ recursiva para determinar se um
numero inteiro  ́ n > 0 e primo.  ́*/



float harm(int n){
    if(n==1){
        return 1;
    }
    else{
        return 1.0/n + harm(n-1);
    }
}



int main()
{
    cout << harm(3);

    return 0;
}
