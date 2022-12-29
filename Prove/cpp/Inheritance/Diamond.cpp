#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
public:
    int a;
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D d;

    // Il problema è che ho due due campi A
    // Non si può fare
    // d.a = 1;
    // Si possono fare
    d.B::a = 1;
    d.C::a = 2;
}