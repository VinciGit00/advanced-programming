#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<char> lista;

    for (list<char>::iterator i = lista.begin(); i != lista.end(); ++i)
    {
        cout << *i << " ";
    }

    // Reverse iterator
    for (list<char>::reverse_iterator i = lista.rbegin(); i != lista.rend();)
    {
        --i;
        cout << *i << " ";
    }
}
