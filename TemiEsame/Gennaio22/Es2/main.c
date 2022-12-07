

#include <stdio.h>
#include <stdlib.h>
#include "interfaccia2.h"
#include "vettore.c"

int main()
{
    int array[] = {1, 2};
    int *p = array;
    vettore_pointer v1 = makeVettore(p, sizeof(array) / sizeof(int));

    int array2[] = {1, 2};
    int *p2 = array2;
    vettore_pointer v2 = makeVettore(p2, sizeof(array2) / sizeof(int));

    printf("%s \n", toString(v1));
    printf("%s \n", toString(v2));

    vettore_pointer result = somma(v1, v2);
    printf("%s \n", toString(result));

    deleteVettore(&v1);
    deleteVettore(&v2);
    deleteVettore(&result);
}
