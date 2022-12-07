#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interfaccia2.h"

struct vettore
{
    int n;
    int *values;
};

vettore_pointer makeVettore(int *p, int dim)
{
    vettore_pointer result = malloc(sizeof(struct vettore));
    result->n = dim;
    result->values = malloc(sizeof(int) * dim);

    for (int i = 0; i < dim; i++)
    {
        // Oppure
        // result->values[i] = *(p+i);
        *(result->values + i) = *(p + i);
    }

    return result;
}

vettore_pointer somma(vettore_pointer v1, vettore_pointer v2)
{
    if (v1->n != v2->n)
        return NULL;
    vettore_pointer result = malloc(sizeof(struct vettore));

    result->n = v1->n;
    result->values = malloc(sizeof(int) * v1->n);

    for (int i = 0; i < v1->n; i++)
    {
        *(result->values + i) = *(v1->values + i) + *(v2->values + i);
    }

    return result;
}

char *toString(vettore_pointer p)
{
    char *result = malloc(sizeof(char) * p->n + 1);
    // Non lo mette in automatico
    *result = '\0';

    for (int i = 0; i < p->n; i++)
    {
        sprintf(result, "%s %d", result, *(p->values + i));
    }

    return result;
}

void deleteVettore(vettore_pointer *p)
{
    free((*p)->values);
    free(*p);
    *p = NULL;
}