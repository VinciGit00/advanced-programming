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
    // Uso la posizione di memoria e la incremento di1 1
    return x + 1;
}

int main()
{
    int a = 10;
    printf("%i \n", function(&a));

    // Non lo posso fare
    // printf("%i \n", function(a));

    printf("%i \n", function2(&a));

    int b[] = {1, 2, 3};
    printf("%i \n", function(&b));

    printf("%i", function2(b));
}