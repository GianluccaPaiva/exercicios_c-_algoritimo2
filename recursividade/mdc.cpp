#include <iostream>
using namespace std;

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros positivos: ";
    cin >> a >> b;

    cout << "MDC(" << a << ", " << b << ") = " << mdc(a, b) << endl;

    return 0;
}
