#include <iostream>
using namespace std;
class Base

{
public:
    void foo();
    int x = 2;
};

class Derived : public Base
{
public:
    // x and foo are private members of Derived
    using Base::foo; // make foo public in Derived
};

int main()
{
    Base d1;
    cout << d1.x << endl;
    Derived d;
    // é accessibile anche qui
    cout << d.x << endl;
    // d.foo(); // okay
    //   d.x;     // error: x is private
}
