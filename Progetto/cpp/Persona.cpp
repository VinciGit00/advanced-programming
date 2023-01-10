#include <iostream>
using namespace std;

class Persona
{
private:
    string name;
    string surname;
    string street;
    int age;

public:
    Persona(string, string, string, int);
    virtual ~Persona();
    void setsurname(string);
    void info();
    string getsurname();
};

Persona::Persona(string n, string s, string st, int a)
{
    name = n;
    surname = s;
    street = st;
    age = a;
}