#include <string>
#include <iostream>

using namespace std;

class Intestatario
{
public:
    string piva;
};

class Negozio : virtual public Intestatario
{
    //	Intestatario i;
public:
    string nome;
    void prendiOrdine() {}
};
class Furgone : virtual public Intestatario
{
public:
    string nome;
    int numerodiruote() { return 4; }
};

class VenditoreAmbulante : public Negozio, public Furgone
{

    using Negozio::nome;
};

int main()
{
    VenditoreAmbulante va;
    cout << va.Negozio::nome << endl;
    // cout << va.nome << endl;
    va.prendiOrdine();
    // cout << va.Negozio::Intestatario::piva << endl;
    cout << va.piva << endl;
}