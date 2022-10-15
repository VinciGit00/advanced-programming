#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void somma(int x, int y, int &z)
{
    z = x + y;
}

int main()
{
    int a = 1, b = 2;
    int result = 0;
    printf("Prima: %i \n", result);
    somma(a, b, result);
    printf("Dopo: %i \n", result);
}