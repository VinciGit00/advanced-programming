#include <string>
#include <iostream>

#include "Personale.cpp"
class Lavoratore : public virtual Personale
{
public:
    Lavoratore(string, string, string, float, string, string);
    Lavoratore(float, string, string);

private:
    float stipendio;
    string sede;
    string dipartimento;
};

Lavoratore::Lavoratore(string n, string s, string b, float st, string se, string d) : Personale(n, s, b)
{
    stipendio = st;
    sede = se;
    dipartimento = d;
}
