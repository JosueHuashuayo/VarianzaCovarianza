#include "Y.cc"
#
int main(){
    X *x = new X();
    Y *y= new Y();

    B *b = new B();
    C *c = new C();
    
    x->foo(b);
    y->foo(c);

    A *Aprueba = x->foo(b);
    C *Bprueba = y->foo(b); //Error de contravarianza 

    return 0;
}