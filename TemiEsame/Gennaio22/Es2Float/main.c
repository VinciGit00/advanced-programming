#include <stdio.h>
#include <stdlib.h>
#include "interfaccia2.h"
#include "vettore.c"

int main()
{
    float array[] = {1, 2};
    float *p = array;
    vettore_pointer v1 = makeVettore(p, sizeof(array) / sizeof(float));

    float array2[] = {1, 2};
    float *p2 = array2;
    vettore_pointer v2 = makeVettore(p2, sizeof(array2) / sizeof(float));

    printf("%s \n", toString(v1));
    printf("%s \n", toString(v2));

    vettore_pointer result = somma(v1, v2);
    printf("%s \n", toString(result));

    deleteVettore(&v1);
    deleteVettore(&v2);
    deleteVettore(&result);
}