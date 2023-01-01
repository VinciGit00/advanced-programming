#include <iostream>
#include <stdlib.h>
using namespace std;

class Duck
{
public:
    int x;
    int *p;
    Duck()
    {
        // Senza il puntatore
        p = new int;
        x = 10;
    }

    Duck(Duck &d)
    {
        this->x = d.x;
        // Cambio i valori dei puntatori
        *(this->p) = *(d.p);
    }
};

int main()
{
}