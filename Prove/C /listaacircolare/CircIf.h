#ifndef CIRC_INT_H
#define CIRC_INT_H
#include <stdbool.h>

typedef struct circolare *circolarePointer;

//
circolarePointer makeList(int *p, int dim);

int prossimo(circolarePointer p);

bool cerca(circolarePointer p);

void aggiungi(circolarePointer p, int number);

void eliminaLista(circolarePointer *p);

char *toString(circolarePointer p);

//
void print(circolarePointer p);
#endif