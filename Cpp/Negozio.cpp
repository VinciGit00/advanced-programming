#include <string>
#include <iostream>
using namespace std;

class Negozio
{
public:
    string nome;
    void prendiOrdine()
    {
    }
};

class Furgone
{
public:
    string nome;
    int numerodiruote()
    {
        return 4;
    }
};

class Ambulante : public Furgone, public Negozio
{
    // using Negozio::nome;
};

int main(int argc, char const *argv[])
{
    Ambulante va;
    va.prendiOrdine();
    va.Negozio::nome = "Marco";
    cout << va.Negozio::nome;
}
