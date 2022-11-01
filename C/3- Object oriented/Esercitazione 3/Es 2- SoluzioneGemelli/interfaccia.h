/*
 * interfaccia.h
 *
 *  Created on: 25 ott 2022
 *      Author: Pelelgrinelli Nico
 */

#ifndef INTERFACCIA_H_
#define INTERFACCIA_H_

typedef struct studente* std_pointer;

std_pointer makeStudente(char* n, char* c);
void printStudente(std_pointer sp);
char* studenteData(std_pointer sp);
void deleteStudente(std_pointer* spp);
void addVoto(std_pointer sp, int x);
void stampaMedia(std_pointer sp);

#endif /* INTERFACCIA_H_ */
