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

	int numero_ruote(const int i) { return i; }

	void targa() const { targa_veicolo = ""; }

	// Se voglio evitarla metto const
	void foo(veicolo &v)
	{
		v.targa_veicolo = "v"
	}
};

void foo(const veicolo &v)
{
	v.targa_veicolo = "v"
}

// Viene allocata in qualche altro modulo
extern int k;

#endif /* VEICOLO_H_ */
