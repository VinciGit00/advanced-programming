
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
    // Questo non si può fare
    // Persona p = Studente;
}