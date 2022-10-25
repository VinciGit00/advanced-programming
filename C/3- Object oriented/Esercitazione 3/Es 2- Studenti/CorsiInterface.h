#ifndef CORSO_INT_H
#define CORSO_INT_H

#include "StudenteInterface.h"
#include "Studente.c"

typedef struct corso *corsopointer;

corsopointer mkCorso(char nome[40]);

void addStudent(corsopointer c, struct student *s);

#endif