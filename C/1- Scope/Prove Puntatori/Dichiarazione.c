#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void change(int *k)
{
    // Devo usare il *
    *k = 5;

    // ora stampa la cella di memoria
    // printf("%d \n", k);
}

int main(int argc, char const *argv[])
{
    int *x;

    int y = 2;
    x = &y;

    printf("%d \n", y);

    *x = 3;

    printf("%d \n", y);

    //N.B: quando devo usare il puntatore non devo specificare l'asterisco
    change(x);
    printf("%d \n", y);

    change(&y);
    printf("%d \n", y);
}
