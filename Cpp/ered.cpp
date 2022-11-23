#include <iostream>
using namespace std;

class Edificio
{
public:
    float getSuperficie()
    {
        return 0;
    }
    int annocostruzione() { return 1900; }
    int computeAPE(int y) { return y * 2; }
};

// Con public la visibilità rimane quella della classe base
class Condominio : public Edificio
{
public:
    int computeAPE(int y)
    {
        // Corrisponde a fare super
        int cape = Edificio::computeAPE(y);
        return cape * 10;
    }
};

class Villa : private Edificio
{
    using Edificio::annocostruzione; // Questo è di nuovo pubblico
};

int main()
{
    Edificio e;
    cout << e.getSuperficie() << endl;

    Condominio *c = new Condominio;

    cout << c->getSuperficie();

    Villa *v = new Villa;
    cout << v->getSuperficie();

    Edificio *pe = new Villa;
    pe->getSuperficie();
}