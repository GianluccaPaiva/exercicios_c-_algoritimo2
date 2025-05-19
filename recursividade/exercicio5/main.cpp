#include <iostream>

using namespace std;

int modulo(int x, int y){
    if(x ==y){
        return 0;
    }
    else if(x<y){
        return x;
    }
    else{
        return modulo((x-y)%y,y);
    }
}

int main()
{
    cout << modulo(3,2);
    return 0;
}
