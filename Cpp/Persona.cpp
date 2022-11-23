#include <iostream>
using namespace std;

class Persona
{
public:
    string nome;

public:
    int *p;
    Persona() : nome("angelo") {}
    ~Persona()
    {
        delete p;
    }
};