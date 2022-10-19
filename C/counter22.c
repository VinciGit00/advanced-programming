#include "counter_td.h"
#include "counter_td.c"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    contatore v1, v2;

    reset(&v1);
    reset(&v2);

    incrementa(&v1);

    // Primo limite: non fa information hiding effettivamente
    //  non da nessun warning
    v2++;

    printf("v1 vale: %i v2 vale: %i ", get_value(v1), get_value(v2));
}
