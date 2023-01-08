#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int *k)
{
    int x = *k;
    int *y = &x;
    {
        // Questo non esisterà più
        int a = 0;
        y = &a;
    }
    return *y;
}

int main(int argc, char const *argv[])
{
    int x = 250000;
    printf("%d \n", f(&x));
}
