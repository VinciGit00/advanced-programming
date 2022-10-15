
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // alloco
    int *s = malloc(sizeof(int) * 4);
    s[0] = 90;
    int h = s[0];
    printf("h vale %i \n", h);
    free(s);
    // dopo la free diventa dangling, cioè che non si sa a cosa punta
    // Buona norma-> aumento la gravità dell'errore
    s = NULL;
    h = s[0];
    printf("h vale %i \n", h);
}
