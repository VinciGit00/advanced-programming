#include <iostream>
#include "Persona.cpp"
using namespace std;

class Studente : public Persona
{
private:
    int nmatricola;
    string corsoStudi;

public:
    Studente(string, string, string, int);
    void set(int m, int c);
};