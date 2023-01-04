#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int c = 2;
    int *p = &c;
    printf("%i \n", *p);

    free(p);

    //    printf("%i", *p);
}
