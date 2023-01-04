#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *foo()
{
    int a[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    return a;
}

int main(void)
{

    int *r = foo();
    int a = 10;
    printf("%i\n", *(r));
    printf("%i\n", *(r + 1));
}