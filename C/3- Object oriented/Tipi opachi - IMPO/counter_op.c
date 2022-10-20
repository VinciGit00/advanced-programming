#include "counter_op.h"
#include <stdlib.h>

struct contatore
{
    int valore
};

// Ritorna al puntatore alla struttura che creo
contatore_pointer mk_counter()
{
    /* Devo creare un malloc prima di tutto
    struct contatore res;
    res.valore = 0;
    return &res; // Ritorna un dangling pointer sullo stack perchè viene restituito*/

    // Creo il puntatore e gli alloco la memoria
    contatore_pointer res = malloc(sizeof(struct contatore));

    res->valore = 0;

    return res;
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