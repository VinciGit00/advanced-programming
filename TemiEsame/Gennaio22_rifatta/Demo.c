#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "VettoreInterface.h"
#include "Vettore.c"

int main(int argc, char const *argv[])
{
    vettorePointer r;
    float array[] = {1, 2, 3};
    float *p = array;

    r = makeVettore(p, sizeof(array) / sizeof(float));
    print(r);

    char *boh = toString(r);

    printf("%s", boh);
}
