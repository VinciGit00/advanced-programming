#include <iostream>
using namespace std;
// C++ program to demonstrate what is object slicing
class Base
{
public:
    void foo()
    {
        cout << "A";
    }
    int x, y;
};

class Derived : public Base
{
public:
    void foo()
    {
        cout << "B";
    }
    int z, w;
};

int main()
{
    Derived d;

    // Object Slicing,
    // z and w of d are sliced off
    Base b = d;
    cout << b.x;
    b.foo();
}