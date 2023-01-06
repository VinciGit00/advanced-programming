#include <iostream>
using namespace std;

void foo(int &a)
{
    cout << a << endl;
    cout << &a << endl;
}

int main(int argc, char const *argv[])
{
    int c = 2;
    int *p = &c;
    cout << &c << endl;
    foo((*p));
}
