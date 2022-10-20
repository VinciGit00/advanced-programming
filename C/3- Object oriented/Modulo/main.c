#include "counter_mod.h"
#include "counter_mod.c"
#include <stdio.h>

int main(int argc, char const *argv[])
{

    reset();

    inc();

    printf("v1 vale: %i ", get_value());
}
