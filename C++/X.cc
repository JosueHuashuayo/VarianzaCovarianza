#include "C.cc"
class X:public C{
    public:
    virtual B* foo(B *b){
        return new B();
    }
};