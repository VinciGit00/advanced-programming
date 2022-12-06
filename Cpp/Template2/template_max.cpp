#include <iostream>
using namespace std;

int massimo(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
    // Oppure
    // return x > y ? x : y;
}

template <typename T>
T massimo(T x, T y)
{
    return x > y ? x : y;
}

class A
{
};

template <int threshold>
bool greaterThan(int y)
{
    if (x > threshold)
        return true;
    else
        false;
}

int main(int argc, char const *argv[])
{
    cout << massimo(2, 3) << endl;
    cout << massimo("ciao", "mondo") << endl;

    A a, b;
    // cout << massimo(a, b);

    greaterThan<80>(2);
}
