#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
public:
    virtual void foo();
    void foo2();
};

class B : public A
{
public:
    virtual void foo();
    virtual void foo2();
};

void A::foo()
{
    cout << "A \n";
}

// Non si può fare
// virtual void B::foo()
void B::foo()
{
    cout << "B \n";
}

void A::foo2()
{
    cout << "A \n";
}

void B::foo2()
{
    cout << "B \n";
}

int main()
{
    A *b = new B();
    b->foo();
    b->foo2();

    A a = B();
    a.foo();
}
