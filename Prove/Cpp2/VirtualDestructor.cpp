#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "Costruttore di A" << endl;
    }

    // Cambia solo questa riga rispetto allo script precedente
    virtual ~A()
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
    A prova = C();

    // A *c = new C();
    // delete c;

    // Non posso fare
    // B *c = new C();
    // delete c;
}
