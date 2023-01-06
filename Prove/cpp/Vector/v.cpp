#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    // Crea un array di  5 elementi interi tutti posti a 0
    vector<int> v(5, 0);

    // Aggiunge in coda e fa dell'allocazione dinamica-> da 5 elementi diventa di 6
    v.push_back(1);

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Accesso a solo un elemento
    cout << v.at(5) << endl;

    // Toglie l'ultimo elemento
    v.pop_back();

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Dimensione
    cout << v.size() << endl;

    // Rimuove tutto
    v.clear();

    for (int i : v)
    {
        cout << i << " ";
    }
}
