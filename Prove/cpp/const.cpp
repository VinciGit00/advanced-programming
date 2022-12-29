#include <iostream>
#include <stdlib.h>
using namespace std;

class Time
{
public:
    Time();
    Time(int, int, int);
    ~Time();
    void getHour();
    void modifyNumber(int);
    void modifyNumber2(int) const;

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

// Qui non posso modificare nulla
void Time::modifyNumber(const int n)
{
    hour += n;
}

void Time::modifyNumber2(int n) const
{
    // Non si può fare -> errore di compilazione
    // hour += n;
}

int main()
{
    // Qui posso usare le (), solo con lo stack (senza puntatore) non si può fare
    Time *pt = new Time();
    pt->getHour();

    // Posso modificare  i campi private
    pt->modifyNumber(2);

    pt->getHour();
}
