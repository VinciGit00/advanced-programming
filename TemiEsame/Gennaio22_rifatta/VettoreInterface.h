#ifndef INTERFACCIA_H_
#define INTERFACCIA_H_

typedef struct vettore *vettorePointer;

vettorePointer makeVettore(float *, int);

char *toString(vettorePointer);

void print(vettorePointer);

#endif