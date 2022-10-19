#include "counter_op.h"
#include <stdlib.h>

struct contatore
{
    int valore
};

contatore_pointer mk_counter()
{
    struct contatore res;
    res.valore = 0;
    return &res; // Ritorna un dangling pointer sullo stack perchè viene restituito
}

int getvalue(contatore_pointer pc)
{
    return pc->valore;
}

void inc(contatore_pointer pc)
{
    // Scritture equivalenti
    // pc->valore++;
    (*pc).valore++;
}

// Puntatore a puntatore
void delete (contatore_pointer *p)
{
    // Modifica il puntatore
    free(*p);
    p = NULL;
}