#include <iostream>
#include <memory>

using namespace std;

class classe
{
public:
    int number = 2;
};

void foo1(unique_ptr<classe> *puntatore)
{
    cout << (*puntatore)->number << endl;
}

void foo2(unique_ptr<classe> &puntatore)
{
    cout << puntatore->number << endl;
}

int main(int argc, char const *argv[])
{
    unique_ptr<classe> p1(new classe());
    unique_ptr<classe> p2;
    // p2 = p1;

    classe *raw;
    // raw = p1;

    raw = new classe();

    unique_ptr<classe> p3(raw);
    cout << p3->number << endl;

    foo1(&p1);
    foo2(p1);
    // Permette di muovere la proprietà del puntatore
    p2 = move(p1);

    shared_ptr<classe> s(new classe());
    shared_ptr<classe> sp;
    // Questo si può fare
    s = sp;
}
