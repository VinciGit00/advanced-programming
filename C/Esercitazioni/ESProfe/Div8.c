#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Toglie iterativamente 3 cifre
bool divisibile8(int n)
{

    // Base ricorsione: tre cifre
    // Tolgo 3 cifre per volta
    // Tranne se il numero è minoter di 1000
    if (n < 1000)
        return n % 8 == 0;
    int trecifre = n % 1000;
    if (trecifre == 0)
        return true;
    else
        divisibile8(trecifre);
}

int main()
{
    bool result = divisibile8(77);
    printf("%i \n", result);

    bool result2 = divisibile8(800);
    printf("%i", result2);
}