#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *foo(int n)
{
    int *p = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        (*(p + i)) = 0;
    }

    // Questo ritorna la posizione di memoria
    //  return &p;

    return p;
}

int main(int argc, char const *argv[])
{
    int n = 3;
    int *r = foo(n);

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", (*(r + i)));
    }
}