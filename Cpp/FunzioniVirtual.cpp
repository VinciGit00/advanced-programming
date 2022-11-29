
#include <iostream>
using namespace std;

class Persona
{
public:
    void print() { cout << "print persona" << endl; }
    virtual void stampa() { cout << "stampa persona" << endl; }
};

class Studente : public Persona
{

public:
    string matricola;
    void print() { cout << "print studente" << endl; }
    virtual void stampa() { cout << "stampa studente " << this->matricola << endl; }
};

int main(int argc, char **argv)
{
    // Il binding dinamico avviene solo se si usano i puntatori
    Persona *p = new Persona;
    p->print();
    p->stampa();

    Studente *s = new Studente;
    s->matricola = "1064889";
    s->print();
    s->stampa();

    Persona *ps = new Studente;
    ps->print();
    ps->stampa();

    // Fenomeno dello slicing
    //  Disattiva il binding dinamico
    //  Non mette memoria sullo heap
    // CREA SOLO UNA PERSONA
    Persona p2 = *s;

    // Disattiva il binding dinamico
    p2.print();
    p2.stampa();
}