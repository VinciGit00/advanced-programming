#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *a = malloc(sizeof(int));
    *(a) = 2;

    printf("%d \n", *a);
    printf("%d \n", a);

    free(a);
    // Mi permette di non usare la riga 22
    // Nessun altro può usare il puntatore
    // a = NULL;

    printf("%d \n", *a);

    int *p = malloc(sizeof(int));
    printf("%d \n", p);
    *(a) = 5;

    // Qui mi rendo conto che c'è un errore
    printf("%d \n", *p);
}