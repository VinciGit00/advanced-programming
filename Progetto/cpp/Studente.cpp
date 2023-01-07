#include "Personale.cpp"

class Studente : public virtual Personale
{
public:
    Studente(string, string, string, string, int);

private:
    string faculty;
    int codMatricola;
};

Studente::Studente(string n, string s, string b, string f, int cod) : Personale(n, s, b)
{
    faculty = f;
    codMatricola = cod;
}