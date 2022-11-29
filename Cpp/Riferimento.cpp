#include <iostream>
using namespace std;

// Restituisce un riferimento ad un oggetto
int &f(int &x)
{
    x = 100;
    return x; // Mi permette di fare modifiche
}

int main()
{
    int j = 10;
    f(j);
    cout << j << endl;

    // Funzioen carina
    f(j) = 200;
    cout << j << endl;
}