#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
public:
    int a;
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D d;

    // Il problema è che ho due due campi A
    // Si possono fare tutti e 3 i metodi

    d.a = 1;
    d.B::a = 1;
    d.B::a = 2;
}