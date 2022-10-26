/*
 * implementazione.c
 *
 *  Created on: 25 ott 2022
 *      Author: Pelelgrinelli Nico
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interfaccia.h"

// IMPORTANTE
//  serve per fare il numero di matricola
//  Variabile static per fare l'incremento
static int n_stud = 0;

struct studente
{
	char nome[30];
	char *cognome;
	int matricola;
	int voti[20]; // ULTIMI 20 voti dello studente
	int prossimo_voto_indx;
	int n_voti;
};

std_pointer makeStudente(char *n, char *c)
{
	std_pointer sp = malloc(sizeof(struct studente));
	sp->cognome = malloc(sizeof(char) * (strlen(c) + 1));
	strcpy((sp->nome), n);
	strcpy((sp->cognome), c);
	sp->matricola = n_stud++;
	sp->prossimo_voto_indx = 0; // Lo saltiamo
	sp->n_voti = 0;
	return sp;
}

void printStudente(std_pointer sp)
{
	printf("nome: %s, cognome: %s, matricola: %i\n", sp->nome, sp->cognome, sp->matricola);
}

char *studenteData(std_pointer sp)
{
	char *data = malloc(sizeof(char) * (strlen(sp->nome) + strlen(sp->cognome) + 15 + 1));
	sprintf(data, "NOME:%s, COGNOME:%s", sp->nome, sp->cognome);
	return data;
}

void deleteStudente(std_pointer *spp)
{
	free((*spp)->cognome);
	free(*spp);
	*spp = NULL;
}

void addVoto(std_pointer sp, int x)
{ // sovvrascrive il primo voto se l'array è pieno
	sp->voti[sp->prossimo_voto_indx] = x;
	sp->prossimo_voto_indx++;
	if (sp->prossimo_voto_indx == 20)
		sp->prossimo_voto_indx = 0;
	if (sp->n_voti < 20)
		(sp->n_voti)++;
}

void stampaMedia(std_pointer sp)
{
	float media = 0.0f;
	printf("----------------------------------------\n");
	printf("Voti:[");
	for (int i = 0; i < sp->n_voti; i++)
	{
		media += sp->voti[i];
		printf(" %i ", sp->voti[i]);
	}
	printf("]\n");
	printf("Numero voti: %i\n", sp->n_voti);
	printf("Media aritmetica: %f\n", media / sp->n_voti);
}
