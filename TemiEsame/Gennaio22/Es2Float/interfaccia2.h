#ifndef INTERFACCIA_H_
#define INTERFACCIA_H_

typedef struct vettore *vettore_pointer;

vettore_pointer makeVettore(float *, int);

char *toString(vettore_pointer);

vettore_pointer somma(vettore_pointer, vettore_pointer);

void deleteVettore(vettore_pointer *);

#endif