#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Scrivere una funzione che dato un
// array di interi calcolare la somma dei numeri interi
int sumIntPariLoop(int *array)
{
    int somma = 0;
    printf("%i \n", sizeof(*array) - 1);
    for (int i = 0; i < sizeof(*array) - 1; i++)
    {
        if (array[i] % 2 == 0)
            // Uso il puntatore come se fosse un array normale
            // somma += array[i];
            // oppure
            somma += *(array + i);
    }
    printf("%i", somma);

    return somma;
}
int sumIntPariRecursive(int *array)
{
}

int main(void)
{
    int a[] = {1, 2, 3};
    int res = sumIntPariLoop(a);
}