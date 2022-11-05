#include <string.h>
#include <stdio.h>

#include "bitvectorInterface.h"
#include "bitvectorImplemented.c"

int main(int argc, char const *argv[])
{
    bitvectorPointer p1, p2;

    p1 = mkBitvector();
    p2 = mkBitvector();

    int a[] = {0, 1, 0, 0, 1};

    add(p1, &a[0], sizeof(a) / sizeof(a[0]));
    add(p2, &a[0], sizeof(a) / sizeof(a[0]));

    print(p1);

    bitvectorPointer p3;
    p3 = and(p1, p2);

    print(p3);
}