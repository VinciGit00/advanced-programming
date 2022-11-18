// Con le classi
#include <iostream>
using namespace std;

class Time
{
public:
	// dichirazione e definizione all'interno della classe (modo 1)
	//	Time(int o, int m, int s){
	//		min = m; ora = o; sec = s;
	//	}
	// DICHIRAZOIONE NELLA CLASSE (MODO 2)
	Time(int, int, int);

	// Lista di inizializzazione
	Time() : sec(0), min(0), ora(0) {}
	void printMilitary();
	// copy constrcuctor
	//	Time(Time const&){
	//		cout << "USATO COPY CONSTRUCTOR";
	//	}
private:
	int ora;
	int min;
	int sec;
};

// Creazione a parte
Time::Time(int o, int m, int s)
{
	min = m;
	ora = o;
	sec = s;
}

void Time::printMilitary()
{
	cout << ora << ":" << min << ":" << sec << endl;
}

int main()
{
	Time t1;
	Time t2(); // NO !!!
	t1.printMilitary();
	// t2.printMilitary();
	Time adesso(9, 50, 0);
	adesso.printMilitary();
	adesso.printMilitary();
	adesso.printMilitary();

	Time *pTime = &adesso;
	pTime->printMilitary();
	(*pTime).printMilitary();

	Time &refTime = adesso;
	refTime.printMilitary();

	// Cambia il metodo con cui alloco la memoria
	int pluto[5];			 // pluto è un int*
	int *pippo = new int[5]; // pippo è int*

	Time y(0, 0, 0);
	Time x = y;
	x.printMilitary();

	Time *pT2 = new Time();
	delete pT2;

	return 0;
}
