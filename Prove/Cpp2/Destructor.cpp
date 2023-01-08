#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "Costruttore di A" << endl;
    }

    ~A()
    {
        cout << "Distruttore di A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Costruttore di B" << endl;
    }

    ~B()
    {
        cout << "Distruttore di B" << endl;
    }
};

class C : public A, B
{
public:
    C()
    {
        cout << "Costruttore di C" << endl;
    }

    ~C()
    {
        cout << "Distruttore di C" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // A a;
    // B b;
    // C c;

    A *c = new C();
    delete c;

    // Non posso fare quello sotto perchè
    // B *c = new C();
    // delete c;
}
