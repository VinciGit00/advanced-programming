
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *itos(int s)
{
    // Se non uso il malloc non alloca, altimenti avrei un puntatore dangling
    char *result = malloc(11);
    sprintf(result, "%d", s);

    return result;
}

int main(int argc, char const *argv[])
{
    char *p = itos(4);
    printf("%s", itos(4));
    free(p);
}
