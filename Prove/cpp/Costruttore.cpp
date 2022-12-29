#include <iostream>
#include <stdlib.h>
using namespace std;

class Time
{
public:
    Time();
    Time(int, int, int);
    void getHour();
    ~Time();
    int val;

private:
    int hour;
    int min;
    int sec;
};

Time::Time(int h, int m, int s)
{
    hour = h;
    min = m;
    sec = s;
}

Time::Time()
{
    hour = 1;
    min = 2;
    sec = 3;
}

void Time::getHour()
{
    cout << "hour: " << hour << "\n";
}

Time::~Time()
{
    cout << "classe distrutta \n";
}

int main(int argc, char const *argv[])
{
    // Alloco sullo stack
    Time t(1, 2, 3);
    Time t2 = Time(1, 2, 3);
    t2.val = 4;

    // Uso dei pointer per gli oggetti
    Time *pt;
    pt = new Time(1, 2, 3);
    // Uso dei metodi con i puntatori
    pt->getHour();

    // quando faccio il delete chiama il distruttore, altrimenti non lo fa partire
    delete pt;

    // Alloco i vettori della classe Time!!!
    Time *pt2;
    pt2 = new Time[5];

    // Eliminazione di un vettore di oggetti
    delete[] pt2;

    // Array non allocato sullo heap ma solo sullo stack
    Time t5[5];
}
