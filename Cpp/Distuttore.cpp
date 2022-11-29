#include <iostream>
using namespace std;

class A
{
public:
    A() { cout << "A" << endl; }
    ~A() { cout << "Distruttore A" << endl; }
};

class B
{
public:
    B() { cout << "B" << endl; }
    ~B() { cout << "Distruttore B" << endl; }
};

class C : public A, B
{
public:
    C()
    {
        cout << "C" << endl;
    }
    ~C()
    {
        cout << "Distruttore C" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Senza i puntatori
    //  C c;

    // Con i puntatori
    A *c = new C;
    delete c;
}