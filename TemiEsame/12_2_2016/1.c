#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// La funzione ritorna 0 se il numero è primo
// Altrimenti un numero maggiore di 0 se non è primo
int divLoop(int n, int ii)
{
    for (int i = 2; i < ii; i++)
    {
        if ((n % i) == 0)
            return 1;
    }

    return 0;
}

int divTail(int n, int ii, int count)
{
    // Passo base
    if (ii == 1)
        return count;
    if ((n % ii) == 0)
        return divTail(n, ii - 1, count + 1);
    return divTail(n, ii - 1, count);
}

int divNoTail(int n, int ii)
{
    if (ii > 1)
    {
        if ((n % ii) == 0)
            return 1 + divNoTail(n, ii - 1);
        else
            return divNoTail(n, ii - 1);
    }
    return 0;
}

int main()
{

    printf("%d \n", divLoop(17, 17));

    printf("%d \n", divTail(17, 17 - 1, 0));

    printf("%d \n", divNoTail(17, 17 - 1));
}