#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo()
{
    char parola[5] = {'C', 'i', 'a', 'o', '\0'};
    // Mette in automatico
    // char *parola = "ciao";
    printf("%s\n", parola);
    return parola;
}

void main(void)
{

    char *r = foo();

    printf("%s\n", r);
}