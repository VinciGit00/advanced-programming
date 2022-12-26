#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *spazio = malloc(sizeof(int));

    free(spazio);
}
