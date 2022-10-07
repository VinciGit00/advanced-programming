#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void modify(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if (*(p + i) == 2)
            *(p + i) = 5;
    }
}

void modifyString(char *p)
{
    for (int i = 0; i < strlen(p); i++)
    {

        if (*(p + i) == 'a')
            *(p + i) = 'A';
    }
}

void printarray(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
        printf("%i ", *(p + i));
    printf("\n");
}

void printString(char *p)
{
    for (int i = 0; i < strlen(p); i++)
        printf("%c ", *(p + i));
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4};
    printarray(a, sizeof(a) / sizeof(int));
    modify(a, sizeof(a) / sizeof(int));
    printarray(a, sizeof(a) / sizeof(int));

    char b[] = "ciao";
    char *p2 = b;

    printString(b);
    modifyString(b);
    printString(b);
}