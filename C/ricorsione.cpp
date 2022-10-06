#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int fattorialeNoTail(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fattorialeNoTail(n - 1);
}

int fattorialeTail(int prod, int &index)
{
    int index2 = index - 1;
    if (index == 1)
        return prod;
    else
        return fattorialeTail(prod * (index2), index2);
}

int main(void)
{
    int n = 5;
    printf("%i ", fattorialeNoTail(n));
    int temp = n;
    printf("%i", fattorialeTail(n, n));
}