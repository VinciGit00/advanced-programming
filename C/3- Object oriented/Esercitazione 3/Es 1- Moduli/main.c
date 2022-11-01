#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "CounterInterface.h"
#include "CounterImplemented.c"

int main(int argc, char const *argv[])
{
    azzera();

    inc2(2);

    char *r = get_value();
    printf("Risultato: %s", r);

    free(r);
}
