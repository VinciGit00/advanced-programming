#ifndef STUDENT_INT_H
#define STUDENT_INT_H

typedef struct studente *studentpointer;
//
studentpointer makestudent(char *n, char *s);

void printStudente(studentpointer s);

char *studentData(studentpointer s);

void deleteStudente(studentpointer *s);
//
void addVoto(studentpointer s, int n);

void stampaMedia(studentpointer s);
#endif