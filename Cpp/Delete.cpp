#include <iostream>
using namespace std;

class Persona
{

public:
    string name;
    Persona() : name("angelo"){};

    ~Persona() { cout << "Persona " << name << " è morta"
                      << "\n"; };
    // Opera su un oggetto
    void m(int);
};

// Le due funzioni sono indipendenti
//  Funzione che non è relativa a nessuno oggetto
void m(int);

void m(int y)
{
    cout << y;
}

void Persona::m(int g)
{
    cout << g;
}

/*
int metodo(const int i)
{
    return i++;
}
*/

int main()
{
    if (6 > 5)
    {
        // Viene alllocata direttamente sullo stack
        // Alocco sullo stack
        Persona p;
        // Alloco nello heap
        Persona *ptr = new Persona();
        Persona *aptr = new Persona[10];

        delete ptr;
        // Se non uso [] tutti gli altri rimangono nello heap
        delete[] aptr;

        // Per evitare uso
        ptr = nullptr;

        // Dangling pointer
        // cout << ptr->name;
    }
    cout << "fine programma";
    return 0;
}