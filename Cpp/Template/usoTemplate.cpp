#include <iostream>
using namespace std;

// Metodo con gli interi
//  Scambia x con y
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Metodo con i generics
//  template <> myswap
template <typename T>
void myswap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 2;
    int y = 10;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    myswap(x, y);
    cout << x << " " << y << endl;
}
