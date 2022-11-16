#include <iostream>
using namespace std;

// Uso di classi
class Time
{
public:
    /*Time(int o, int m, int s)
    {
        ora = o;
        min = m;
        sec = s;
    }*/
    // Lista di inizializzazione
    Time() : sec(0), min(0), ora(0){};
    Time(int, int, int);
    void printMilitary();
    // Copy constructor -> fa una copia campo per campo
    Time(Time const &)
    {
        cout << "Usato copy constructor";
    }

private:
    int ora;
    int min;
    int sec;
};

int main()
{
    Time adesso(9, 50, 10);
    adesso.printMilitary();

    // Va bene
    Time t1;

    // Non va bene
    // Time t1();

    // Creo un puntatore
    Time *ptime;
    // Uso la notazione con la arrow
    ptime->printMilitary();
    // E' equivalente a:
    (*ptime).printMilitary();

    // Devo inizializzare
    // Non possono essere nulli i riferimenti
    // Funzionano come se fossero un alias
    Time &refTime = adesso;
    refTime.printMilitary();

    // Crea 5 interi sullo stack di attivazione
    int pluto[5];
    // pluto è un int*
    int *pippo = new int[5]; // Pippo è un int* ma nello heap

    // Copy constructor
    Time y;
    y = adesso;

    // Alloca nello heap
    Time *pt2 = new Time();
    delete (*pt2);
}

Time::Time(int o, int m, int s)
{
    min = m;
    o = o;
    s = s;
}

void Time ::printMilitary()
{
    cout << ora << ":" << min << ":" << sec << endl;
}