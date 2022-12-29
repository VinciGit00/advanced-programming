#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
    int a;
    friend class B;
};

class B
{
public:
    void foo();
};

void B::foo()
{
    A a;
}

int main()
{
}
