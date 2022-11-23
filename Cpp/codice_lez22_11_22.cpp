//============================================================================
// Name        : codice_lez22_11_22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
	string nome;
public:
	Persona() :
			nome("angelo") {}
~Persona(){
	cout << "persona " << nome << " distrutta" << endl;
}

  void m(int);
};

void m(int);
void m(int y){cout << y;}
void Persona::m(int g){cout << g;}


int main() {
	if (6 > 5) {
		Persona p;
		Persona* ptr = new Persona();
		Persona* aptr = new Persona[10];
		cout<< " finito il corpo dell'if" << endl;
		delete ptr;
		delete [] aptr;
		// dangling pointer
		cout << ptr->nome;
		//per evitare
		ptr = nullptr;
		cout << ptr->nome;
	}
	cout << " fine programma" << endl;
	return 0;
}
