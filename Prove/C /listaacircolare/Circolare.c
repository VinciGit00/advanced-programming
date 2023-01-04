#include "CircIf.h"

struct circolare
{
    int *elementi;
    int dim;
    int poscorrente;
};

circolarePointer makeList(int *p, int dim)
{
    circolarePointer res = malloc(sizeof(struct circolare));
    res->dim = 0;
    res->poscorrente = 0;
    return res;
}

void aggiungi(circolarePointer p, int number)
{
    if (p->dim != 0)
    {
        int *temp = malloc(sizeof(int) * (p->dim + 1));
        for (int i = 0; i < p->dim; i++)
        {
            *(temp + i) = *(p->elementi + i);
        }

        *(temp + p->dim) = number;

        free(p->elementi);
        p->elementi = temp;
        p->dim = p->dim + 1;
    }
    else
    {
        p->dim = 1;
        p->elementi = malloc(sizeof(int));
        *(p->elementi) = number;
    }
}

int prossimo(circolarePointer p)
{

    if (p->poscorrente < p->dim - 1)
    {
        p->poscorrente = p->poscorrente + 1;
        return *(p->elementi + p->poscorrente);
    }
    int newposition = 0;
    p->poscorrente = newposition;
    return *(p->elementi + p->poscorrente);
}

void print(circolarePointer p)
{
    for (int i = 0; i < p->dim; i++)
    {
        printf("%d", *(p->elementi + i));
    }
}