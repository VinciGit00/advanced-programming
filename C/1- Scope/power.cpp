#include <iostream>

long power(long &a, long &b)
{
    long res = 1;
    while (b-- > 0)
        res *= a;
    return res;
}

int main()
{
    long x = 2, y = 3;
    long c = power(x, y);
    printf("%ld", c);

    // Problema: se lo richiamo decrementa e quindi non posso più usarlo
}