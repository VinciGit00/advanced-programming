#include <iostream>
using namespace std;
class Base

{
public:
    void foo();
    int x;
};

class Derived : private Base
{
public:
    // x and foo are private members of Derived
    using Base::foo; // make foo public in Derived
};

int main()
{
    Derived d;
    d.foo(); // okay
    //  d.x;     // error: x is private
}
