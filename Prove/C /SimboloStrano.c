#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int *p)
{
    (*p)++;
    *(p + 1) = 10;

    printf("%d \n", *p);
    printf("%d \n", *(p + 1));
}

int main(int argc, char const *argv[])
{
    int b = 2;
    int *a = &b;

    // foo(a);
    // foo(&b);
    int array[] = {1, 4, 5};
    foo(array);
}