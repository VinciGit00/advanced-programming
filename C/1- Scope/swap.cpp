#include <stdlib.h>
#include <cstdio>

void swap(long &a, long &b)
{
    long temp = a;
    a = b;
    b = temp;
}

int main()
{
    long x = 2, y = 3;
    printf("x: %li, y: %li \n", x, y);
    swap(x, y);
    printf("x: %li, y: %li", x, y);

    return 0;
}