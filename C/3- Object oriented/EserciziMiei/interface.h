#ifndef COUNTER_MOD_H
#define COUNTER_MOD_H

typedef struct struttura *struttura_pointer;

struttura_pointer mk_counter(char *name, char *surname, int number);

void setname(struttura_pointer p, char *name);

void setsurname(struttura_pointer p, char *surnname);

void setNumber(struttura_pointer p, int number);

char *getname(struttura_pointer p);

char *getsurname(struttura_pointer p);

int getNumber(struttura_pointer p);

void deleteall(struttura_pointer p);

#endif