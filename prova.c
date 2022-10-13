
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int c = 4;
    int *p = &c;
    printf("Prima: %i \n", c);
    *p = 300;
    printf("Dopo: %i", c);
}
