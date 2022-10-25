#ifndef COUNTER_INT_H
#define COUNTER_INT_H

typedef struct student *studentpointer;

studentpointer makeStudent(char *n, char *c, int matricola);

void printstudent(studentpointer s);

char *studentData(studentpointer s);

void addVoto(studentpointer s, int voto);

void stampaMedia(studentpointer s);

void deleteStudent(studentpointer s);

#endif