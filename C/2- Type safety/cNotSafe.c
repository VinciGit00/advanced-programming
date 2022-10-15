
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    double pi = 3.14;
    int p = pi;

    printf("%i \n", p);

    // NUll pointer
    char *s = NULL; //è come se puntasse a 0
                    // printf("Questa è la mia stringa %s \n", s);

    // Genera un segmentation fault
    // printf("Questa è il primo carattere %c \n", s[0]);

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    *(a + 4) = 90;
    // printf("a ultimo elemento: %i \n ", *(a + 3));

    char dal[4];
    strcpy(dal, "DALMINE");
    // printf("%s", dal);

    char r[] = {'i', '0', 0};
    printf("r %lu %lu", strlen(r), sizeof(r));
}
