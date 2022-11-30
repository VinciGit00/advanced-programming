#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 100;
    cout << (b = a) << " " << b << endl;

    int c = 90;

    // L'assegnamento viene valutato da destra verso sinistra
    a = b = c;

    cout << a << " " << b << " " << c;

    // Vale anche per gli oggetti
}
