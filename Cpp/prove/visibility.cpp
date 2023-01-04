
#include <iostream>
using namespace std;

class A
{
public:
    int i = 2;
};

class B : A
{
};

int main(int argc, char const *argv[])
{
    A a;
    cout << a.i << "\n";

    // B b;
    // cout << b.i;

    A *a2 = new A();
    cout << a2->i << "\n";

    // Se non è public non è accessibile
    // Questo codice genera errore
    // A *a3 = new B();
    // cout << a3->i << "\n";
}
