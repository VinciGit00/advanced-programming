#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "bitvectorInterface.h"

struct bitvector
{
    int *arrray;
    int numberelements;
};

bitvectorPointer mkBitvector()
{
    bitvectorPointer res = malloc(sizeof(struct bitvector));
    res->numberelements = 0;
    res->arrray = NULL;
    return res;
}

void add(bitvectorPointer p, int *n, int dim)

{
    // Per un vettore devo creare una malloc
    int *temp = malloc(sizeof(dim));

    p->numberelements = dim;
    for (int i = 0; i < dim; i++)
    {
        *(temp + i) = *(n + i);
    }
    free(p->arrray);
    p->arrray = temp;
}

bitvectorPointer AND(bitvectorPointer p1, bitvectorPointer p2)
{

    bitvectorPointer result = malloc(sizeof(bitvectorPointer) * p1->numberelements);

    for (int i = 0; i < p1->numberelements; i++)
    {
        if (*(p1->arrray + i) == *(p2->arrray + i))
            *result->array + i = 1;
        else
            *(result + i) = 0;
    }
    return result;
}

void print(bitvectorPointer p)
{
    for (int i = 0; i < p->numberelements; i++)
    {
        printf("%i", *(p->arrray + i));
    }
    printf("\n");
}