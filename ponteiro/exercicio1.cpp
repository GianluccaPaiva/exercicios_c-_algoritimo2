#include <iostream>
using namespace std;


int main() {
    
    int i = 1, s;  
    int j = 2;  
    int *p, *q, *r;
    
    // Atribui o endereço de i para p
    p = &i;  
    
    // Atribui o endereço de j para q
    q = &j;
    
    // Atribui o endereço de i para r, utilizando o operador de desreferenciamento (&*) duas vezes
    r = &*&i;
    
    // Atribui o valor de j para s, utilizando o operador de desreferenciamento (&*) duas vezes
    s = *&*&j;
    
    // Incrementa o valor de i utilizando o operador de incremento pós-fixado (++), 
    // soma o valor de q e atribui o resultado para i
    i = (*p)++ + *q;
    
    return 0;
}