#include <stdio.h>

#include "counter_op.h"
#include "counter_op.c"

int main(int argc, char const *argv[])
{
    // Uso i puntatori opachi

    contatore_pointer p1, p2;
    p1 = mk_counter();

    printf("valore: %i", p1->valore);
}
