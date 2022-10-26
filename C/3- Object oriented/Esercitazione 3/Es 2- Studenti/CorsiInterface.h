#ifndef CORSO_INT_H
#define CORSO_INT_H

typedef struct corso *corsopointer;

corsopointer mkCorso(char nome[40]);

void addStudent(corsopointer c, studentpointer s);

void deleteAll(corsopointer *c);

#endif