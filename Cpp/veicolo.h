/*
 * veicolo.h
 *
 *  Created on: Nov 22, 2022
 *      Author: angel
 */

#ifndef VEICOLO_H_
#define VEICOLO_H_
#include <string>

class veicolo
{
	std::string targa_veicolo;

public:
	veicolo();
	~veicolo();
	int jjj() { return 0; }
	int numero_ruote(const int i) { return i; }

	// void targa() const { targa_veicolo = "";}
};

extern int k;

void foo(const veicolo &v)
{
	// Errore perchè private
	// v.targa_veicolo = "";
}

#endif /* VEICOLO_H_ */