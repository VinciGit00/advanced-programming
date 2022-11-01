#ifndef CORSO_INT_H
#define CORSO_INT_H

#include "StudenteInterface.h"

typedef struct corso *corsopointer;

corsopointer mkCorso(char *string);

void addStudent(corsopointer c, studentpointer s);

void printcourse(corsopointer c);

void deletecourse(corsopointer *c);

#endif