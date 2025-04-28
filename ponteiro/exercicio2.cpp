#include <iostream>
using namespace std;

int main(){
    int val = 1;
    int *ptr,*ptr2;
    ptr = &val;
    cout<<val<<" "<<&val<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
    *ptr = 2;
    ptr2 = &*&val;//ou ptr2 = ptr ou ptr2 = &val;
    cout<<ptr2<<" "<<*ptr2<<endl;
    *ptr2 = 3;
    cout<<val<<endl;
    return 0; 

}