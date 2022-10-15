
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int x = 20;
    int *p = &x;
    // Prende il valore di x
    int z = *p;
    *p = 25;
    // Prende la posizione di x
    int k = *p;

    int *pInt = NULL;
    *pInt = 2;
}