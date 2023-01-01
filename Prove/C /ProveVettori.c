#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int *p)
{

    // Non devo usare il simbolo di puntatore
    // Perche non funziona?
    //(*p)++;
    printf("%d \n", p);
}

void printArray(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d \n", *(p + i));
    }
}
void modifyArray(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        *(p + i) = 4;
    }
    printArray(p, dim);
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4};
    printf("%d \n", *a);
    printf("%d \n", a[0]);

    // Sono la stessa cosa le due equazioni seguenti
    printf("%d \n", a);
    printf("%d \n", &a);

    foo(*a);

    printArray(a, sizeof(a) / sizeof(int));

    modifyArray(a, sizeof(a) / sizeof(int));
}