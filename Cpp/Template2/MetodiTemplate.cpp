#include <iostream>
using namespace std;

template <class T>
T valore(T t1)
{
    return t1;
};

int valore(int t1)
{
    cout << "metodo con integer" << endl;
    return t1;
};

template <class T>
void valore(T t2, int a)
{
    cout << "Ciao" << endl;
};

int main(int argc, char const *argv[])
{
    valore(2, 4);
    cout << valore(3);
}
