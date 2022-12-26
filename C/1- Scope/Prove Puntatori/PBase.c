#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int y = 2;
    int *x;

    x = &y;
    // Valore puntato
    printf("%d \n", *x);

    // Cella di memoria di y
    printf("%d \n", &x);

    // Cella di memoria di X
    printf("%d \n", x);
}