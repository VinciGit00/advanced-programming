#include <string.h>
#include <stdio.h>

#ifndef BITVECTOR_MOD_H
#define BITVECTOR_MOD_H

typedef struct bitvector *bitvectorPointer;

bitvectorPointer mkBitvector();

void add(bitvectorPointer p, int n[], int dim);

int AND(bitvectorPointer p1, bitvectorPointer p2);

int OR(bitvectorPointer p1, bitvectorPointer p2);

int NOT(bitvectorPointer p1);

int toString(bitvectorPointer p);

#endif