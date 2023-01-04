#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "VettoreInterface.h"

struct vettore
{
    float *elementi;
    int nelementi;
};

vettorePointer makeVettore(float *a, int n)
{

    vettorePointer result = malloc(sizeof(struct vettore));
    result->nelementi = n;
    result->elementi = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++)
    {
        *(result->elementi + i) = *(a + i);
    }
    return result;
}

char *toString(vettorePointer v)
{
    char *r = malloc(sizeof(float) * v->nelementi * 3 + 1);
    r[0] = 0;

    for (int i = 0; i < v->nelementi; i++)
    {
        sprintf(r, "%s %f", r, *(v->elementi + i));
    }
    return r;
}

void print(vettorePointer v)
{

    for (int i = 0; i < v->nelementi; i++)
    {
        printf("%f ", *(v->elementi + i));
    }
    printf("\n");
}