#include <iostream>
using namespace std;

struct Time
{
    int ora;
    int min;
    int sec;
};

void printmilitary(Time t)
{
    cout << t.ora << ":" << t.min << ":" << t.sec << endl;
}

// Passaggio per riferimento e non posso modificarlo
void printmilitary2(const Time &t)
{
    cout << t.ora << ":" << t.min << ":" << t.sec << endl;
}

int main()
{
    // Time adesso = {0, 0, 0};
    // Oppure
    Time adesso;
    adesso.ora = 10;
    adesso.min = 10;
    adesso.sec = 10;

    printmilitary(adesso);

    cout << "Hello world" << endl;
}