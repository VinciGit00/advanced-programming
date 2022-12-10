#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(10);
    cout << v[0] << endl;

    // Questo non va bene perchè scrivo fuori dal buffer
    v[100] = 150;
    cout << v[100];

    v.assign(10, 90);

    // Copia l'intero vettore e crea un nuovo oggetto, non punta allo stesso oggetto
    vector<int> b = v;

    // Cambia il b ma non il v
    b[0] = 900;

    for (vector<int>::iterator i = b.begin(); i != b.end(); ++i)
    {
        cout << *i << " ";
    }
}
