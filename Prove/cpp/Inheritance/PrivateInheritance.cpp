#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
    int a;
};

class : private A
{
    void foo();
};

int main()
{
}