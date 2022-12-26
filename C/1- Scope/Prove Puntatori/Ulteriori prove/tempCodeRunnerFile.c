#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char *fun()
{
    char *p = "Marco";
    return &p;
}

int main(int argc, char const *argv[])
{
    char *r = fun();

    printf("%c", *(r + 1));
}
