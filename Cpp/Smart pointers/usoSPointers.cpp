#include <iostream>
#include <memory>

using namespace std;

class Computer
{
public:
    int costo;
    ~Computer()
    {
        cout << "Distrutto" << endl;
    }
};
void print_pointers(Computer *p)
{
    cout << "computer: " << p->costo << endl;
}
// void print_pointers2(unique_ptr<Computer> *p)
//{
// }

void print_pointers2(unique_ptr<Computer> &p)
{
    cout << p->costo << endl;
}

void uso_pointers()
{
    Computer *p = new Computer;

    p->costo = 1000;

    print_pointers(p);

    // Se mi dimentico di cancellarlo ho un memory leak
    delete p;
}

// Crea una copia che punta allo stesso oggetto nello heap
void uso_share_pointers()
{
    shared_ptr<Computer> p(new Computer);
    shared_ptr<Computer> p2 = p;
}

shared_ptr<Computer> uso_share_pointers2()
{
    shared_ptr<Computer> p(new Computer);
    shared_ptr<Computer> p2 = p;

    return p2;
}
void uso_smart_pointers()
{
    unique_ptr<Computer> p(new Computer);

    p->costo = 1000;

    // Posso farlo
    //  print_pointers2(p);

    // Non posso fare neanche questo
    // Può essere puntato da uno solo e basta
    // unique_ptr<Computer> p2(new Computer);
    // p2 = p;

    print_pointers2(p);
}

int main(int argc, char const *argv[])
{
    uso_pointers();
    uso_smart_pointers();

    shared_ptr<Computer> p2 = uso_share_pointers2();
}
