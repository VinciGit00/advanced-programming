#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int calcolaLoop(char *);

int calcolaLoop(char *array)
{
    int somma = 0;

    for (int i = 0; i < strlen(array); i++)
    {
        somma = somma + *(array + i) * (i + 1);
    }
    return somma;
}

int calcolaTail(char *array)
{

    if (*array == 0)
        return;

    return *(array) * (strlen(array) + 1) + calcolaTail(array + 1);
}

int main()
{
    char parola[] = "abc";
    printf("%i \n", calcolaLoop(parola));
    printf("%i", calcolaTail(parola));
}