#include <iostream>
using namespace std;
class Base

{
public:
    void foo() { cout << "A"; }
};

class Derived : public Base
{
public:
    void foo() { cout << "b"; }
};

int main()
{
    Base b;
    Derived d;
    b = d;
    // Non c'è covarianza
    b.foo();
}