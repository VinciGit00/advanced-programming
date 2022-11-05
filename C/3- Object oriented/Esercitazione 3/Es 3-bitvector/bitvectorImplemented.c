#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "bitvectorInterface.h"

struct bitvector
{
    int *array;
    int numberelements;
};

bitvectorPointer mkBitvector()
{
    bitvectorPointer res = malloc(sizeof(struct bitvector));
    res->numberelements = 0;
    res->array = NULL;
    return res;
}

void add(bitvectorPointer p, int *n, int dim)

{
    // TODO: lancio un'eccezione
    //  Per un vettore devo creare una malloc
    int *temp = malloc(sizeof(dim));

    p->numberelements = dim;
    for (int i = 0; i < dim; i++)
    {
        *(temp + i) = *(n + i);
    }
    free(p->array);
    p->array = temp;
}

bitvectorPointer and (bitvectorPointer p1, bitvectorPointer p2)
{

    bitvectorPointer result = malloc(sizeof(bitvectorPointer));

    // Devo allocare anche l'array
    result->array = malloc(sizeof(int) * p1->numberelements);

    if (p1->numberelements != p2->numberelements)
        return NULL;

    for (int i = 0; i < p1->numberelements; i++)
    {
        // if(p1.array[i])
        if (*(p1->array + i) == 1 && *(p2->array + i) == 1)
        {
            *(result->array + i) = 1;
        }

        else
        {
            *(result->array + i) = 0;
        }

        result->numberelements++;
    }
    return result;
}

void print(bitvectorPointer p)
{
    for (int i = 0; i < p->numberelements; i++)
    {
        printf("%i", *(p->array + i));
    }
    printf("\n");
}