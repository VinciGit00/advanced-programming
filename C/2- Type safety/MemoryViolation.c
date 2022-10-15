
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *p;
    // Assegno la cella di memoria
    // Potrebbe essere non valida
    p = 1000;

    *p = 'A';
}