#include <iostream>
using namespace std;

class Edificio
{
public:
    float getSuperficie() { return 0; }
    int annocostruzione() { return 1900; }
    int computeAPE(int y) { return y * 2; }
};

class Condominio : public Edificio
{
public:
    using Edificio::computeAPE;
    int computeAPE()
    {
        int cape = computeAPE(6); //--> errore per redefine
        // int cape = Edificio::computeAPE(6);
        return cape * 10;
    } // redefining
};
class Villa : private Edificio
{
    using Edificio::annocostruzione; // questo è di nuovo pubblico
};

int main()
{
    Edificio e;
    cout << e.getSuperficie() << endl;
    cout << e.computeAPE(5) << endl;

    Condominio *c = new Condominio;
    cout << c->getSuperficie() << endl;
    cout << c->computeAPE(5) << endl;

    cout << c->Edificio::computeAPE(6) << endl;

    Villa *v = new Villa;

    // cout << v->getSuperficie() << endl;
    // cout << v->Edificio::getSuperficie() << endl;

    // Edificio *pe = new Villa;
    // pe->getSuperficie();
}