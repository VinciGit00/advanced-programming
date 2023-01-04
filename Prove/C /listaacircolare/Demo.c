#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Circolare.c"
#include "CircIf.h"

int main(int argc, char const *argv[])
{
    int a[] = {1, 2};

    circolarePointer c;
    c = makeList(a, sizeof(a) / sizeof(int));

    aggiungi(c, 2);

    print(c);
}