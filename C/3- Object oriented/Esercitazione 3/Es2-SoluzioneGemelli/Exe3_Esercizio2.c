/*
 ============================================================================
 Name        : Exe3_Esercizio2.c
 Author      : Pelelgrinelli Nico
 Version     : 1.0
 Description : Tipi opachi
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "interfaccia.h"

int main(void) {
	//Creazione e stampa studenti1
	std_pointer studente1 = makeStudente("Nico", "Pellegrinelli");
	printStudente(studente1);
	std_pointer studente2 = makeStudente("Mauro", "Sacco");
	printStudente(studente2);

	//Stampa con stringa data studente2
	char* data = studenteData(studente2);
	printf("%s\n", data);
	free(data);

	//Eliminazione studente2
	deleteStudente(&studente2);
	//printStudente(studente2);

	//Test voti studente1
	addVoto(studente1, 18);
	stampaMedia(studente1);
	for(int i=1; i<20; i++){
		addVoto(studente1, (18+rand()%13));
	}
	stampaMedia(studente1);
	addVoto(studente1, 30);
	addVoto(studente1, 30);
	addVoto(studente1, 30);
	stampaMedia(studente1);


	return EXIT_SUCCESS;
}
