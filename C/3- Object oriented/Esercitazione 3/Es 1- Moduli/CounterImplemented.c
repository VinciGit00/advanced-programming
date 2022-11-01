#include <string.h>
#include <stdlib.h>

#include "CounterInterface.h"

static int val;

void inc2(int i)
{
    val += i;
}

void azzera()
{
    val = 0;
}

char *get_value()
{
    char *res = malloc(sizeof(val));

    sprintf(res, "%i", val);
    return res;
}