#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ricerca(int n, int index, int *array, int dim)
{
    // Passo base
    if (index > dim)
        return false;
    if (array[index] == n)
        return true;

    return ricerca(n, index + 1, array, dim);
}

int main(void)
{
    // N.B il vettore deve essere già ordinato
    int array[] = {1, 2, 3, 4, 5};
    printf("%i", ricerca(7, 0, array, sizeof(array)));
}