#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int x = 2;
    int *ptr;

    ptr = &x;

    printf("%d \n", *ptr);

    free(ptr);

    // Serve per capire in futuro che non è più utilizzabile
    ptr = NULL;
    // ptr = 2;
    // Dà errore
    *ptr = 2;
    ptr = &x;

    printf("%d \n", *ptr);
}
