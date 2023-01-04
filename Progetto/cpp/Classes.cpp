#include <string>
#include <iostream>

using namespace std;

// Classes
class Personale
{
public:
    Personale(string, string, string);
    ~Personale();
    string getName();
    string getSurname();
    string getBirthday();

private:
    string name;
    string surname;
    string birthday;
};

class Lavoratore : public virtual Personale
{
public:
    Lavoratore(string, string, string, float, string, string);

private:
    float stipendio;
    string sede;
    string dipartimento;
};

class Usciere : public virtual Lavoratore
{
public:
    Usciere(string, string, string, float, string, string, string);

private:
    string palazzo;
};

class Segretario : public virtual Lavoratore
{
public:
    Segretario(string, string, string, float, string, string, string);

private:
    string assistito;
};

class Professore : public virtual Lavoratore
{
public:
    Professore(string, string, string, float, string, string, string);

private:
    string tipologiaContratto;
};

// Methods
Personale::Personale(string n, string s, string b)
{
    name = n;
    surname = s;
    birthday = b;
}

Lavoratore::Lavoratore(string n, string s, string b, float st, string se, string d) : Personale(n, s, b)
{
    stipendio = st;
    sede = se;
    dipartimento = d;
}

Segretario::Segretario(string n, string s, string b, float st, string se, string d, string a) : Lavoratore(n, s, b, st, se, d)
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
