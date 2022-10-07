#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int function(int *x)
{
    // Prendo il valore puntato e incremento di 1
    return *x + 1;
    // è diverso da
    // return *(x+1) + 1;
    // Perchè prende il valore della cella successiva e lo incrementa di 1
}

int function2(int *x)
{
    // Uso la posizione di memoria e la incremento d1 1
    return x + 1;
}

void function3(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if (*(p + i) == 2)
            *(p + i) = 100;
    }
}

void print(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
        printf("%i ", *(p + i));
    printf("\n");
}

int main()
{
    int a = 10;
    // printf("%i \n", function(&a));

    // Non lo posso fare
    // printf("%i \n", function(a));

    // printf("%i \n", function2(&a));

    int b[] = {1, 2, 3};
    // printf("%i \n", function(&b));
    print(b, sizeof(b) / sizeof(int));
    function3(b, sizeof(b) / sizeof(int));
    print(b, sizeof(b) / sizeof(int));
}