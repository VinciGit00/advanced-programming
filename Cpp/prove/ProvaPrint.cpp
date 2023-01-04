#include <iostream>
using namespace std;

class A
{
public:
    void goo() { cout << "A"; };
};

class B : public A
{
public:
    void goo() { cout << "B"; };
};
int main(int argc, char const *argv[])
{
    A a;
    B b;
    a = b;
    a.goo();
}
