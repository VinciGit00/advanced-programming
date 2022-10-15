#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void incrementa(int **p2)
{
    **p2 = **p2 + 1;
}

int main()
{
    int a = 1;
    printf("%i \n", a);
    int *p1 = &a;
    incrementa(&p1);
    printf("%i \n", a);
}