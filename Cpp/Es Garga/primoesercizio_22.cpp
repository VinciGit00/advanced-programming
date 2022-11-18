//============================================================================
// Name        : primoesercizio_22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct TimeS{
	int ora; int min; int sec;
};

void printMilitary(const TimeS& t){
	cout << t.ora << ":" << t.min << ":" << t.sec << endl;
	// non posso perchè const t.ora ++;
}

int mainStruct() {
	TimeS adesso; adesso.min = 35; adesso.ora = 9; adesso.sec = 0;
	printMilitary(adesso);
	printMilitary(adesso);
	printMilitary(adesso);
	return 0;
}
