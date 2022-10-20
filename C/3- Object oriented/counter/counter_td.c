
#include "counter_td.h"
// Quando modifico il codice  ricompila solo il counter_td.c
void reset(contatore *pc)
{
    *pc = 0;
}

void incrementa(contatore *pc)
{
    (*pc)++;
}

// Potrei passare anche il puntatore, non cambia niente, ma il puntatore occupa meno spazio
int get_value(contatore c)
{
    return c;
}