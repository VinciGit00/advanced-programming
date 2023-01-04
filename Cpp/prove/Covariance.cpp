#include <iostream>

class Base
{
public:
    virtual void foo() { std::cout << "Base::foo() called" << std::endl; }
};

class Derived : public Base
{
public:
    void foo() { std::cout << "Derived::foo() called" << std::endl; }
};

int main()
{
    Base *b = new Base();
    b->foo(); // Outputs "Base::foo() called"

    Derived *d = new Derived();
    d->foo(); // Outputs "Derived::foo() called"

    // Questa è covarianza
    b = d;
    // Lo garantisce virtual
    b->foo(); // Outputs "Derived::foo() called"

    // Questo è un esempio di Slicing
    // cout << b->b;
    Base b2 = *d;
    b2.foo(); // Outputs "Base::foo() called"

    Base b3;
    Derived b4;
    b3.foo();
    // Questo dimostra che non c'è la covarianza
    b3 = b4;
    b3.foo();
    b4.foo();
}
