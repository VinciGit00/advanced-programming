#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char *fun()
{
    char p = "Marco";
    return &p;
}

void fun2(char *a)
{
    printf("%c", *a);

    a++;

    printf("%c", *a);
}

int main(int argc, char const *argv[])
{
    char *r = fun();

    printf("%c", *(r));

    char *name = "Marco";

    fun2(name);
}
