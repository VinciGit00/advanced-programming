#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Scrivere una funzione che dato un
// array di interi calcolare la somma dei numeri interi
int sumIntPariLoop(int *array, int dim)
{
    int somma = 0;
    // printf("%i \n", sizeof(*array) - 1);
    for (int i = 0; i < dim; i++)
    {
        if (array[i] % 2 == 0)
            somma += *(array + i);
    }

    return somma;
}
int sumIntPariRecursive(int *array, int dim, int counter, int sum)
{
    if (counter == dim)
        return sum;
    if (*array % 2 == 0)
    {
        sum += *array;
    }

    return sumIntPariRecursive(++array, dim, ++counter, sum);
}

int main()
{
    int a[] = {1, 2, 3};
    int res = sumIntPariLoop(a, sizeof(a) / sizeof(int));
    int res2 = sumIntPariRecursive(a, sizeof(a) / sizeof(int), 0, 0);
    printf("%i \n", res);
    printf("%i", res2);
}