#include <string>
#include <iostream>
#include "Personale.cpp"
#include "Lavoratore.cpp"

using namespace std;

class Usciere : public virtual Lavoratore, public virtual Personale
{
public:
    Usciere(string, string, string, float, string, string, string);

private:
    string palazzo;
};

class Segretario : public virtual Lavoratore, public virtual Personale
{
public:
    Segretario(string, string, string, float, string, string, string);

private:
    string assistito;
};

class Professore : public virtual Lavoratore, public virtual Personale
{
public:
    Professore(string, string, string, float, string, string, string);

private:
    string tipologiaContratto;
};

Lavoratore::Lavoratore(float st, string se, string d) : Personale("", "", "")
{
    stipendio = st;
    sede = se;
    dipartimento = d;
}

Segretario::Segretario(string n, string s, string b, float st, string se, string d, string a) : Lavoratore::Lavoratore(n, s, b, st, se, d)
{
    assistito = a;
}

Usciere::Usciere(string n, string s, string b, float st, string se, string d, string p) : Lavoratore(n, s, b, st, se, d)
{
    palazzo = p;
}

Professore::Professore(string n, string s, string b, float st, string se, string d, string t) : Lavoratore(n, s, b, st, se, d)
{
    tipologiaContratto = t;
}
