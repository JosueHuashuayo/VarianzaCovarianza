#include "X.cc"
class Y:public X{
    public:
    B* foo(B *b ){
        return new B();
    }
};
