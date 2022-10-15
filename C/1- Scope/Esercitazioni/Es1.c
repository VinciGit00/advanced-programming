#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int calcolaLoop(char *);
int calcolaNOTail(char *, int);
int calcolaTail(char *, int, int);

int calcolaLoop(char *array)
{
    int somma = 0;

    for (int i = 0; i < strlen(array); i++)
    {
        somma = somma + *(array + i) * (i + 1);
    }
    return somma;
}
int calcolaNOTail(char *array, int len)
{

    if (*array == 0)
        return 0;

    return *(array) * (len - strlen(array)) + calcolaNOTail(array + 1, len);
}
int calcolaTail(char *array, int sum, int len)
{

    if (*array == 0)
        return sum;
    return calcolaTail(array + 1, sum + *(array) * (len - strlen(array)), len);
}

int main()
{
    char parola[] = "abc";
    printf("%i \n", calcolaLoop(parola));
    printf("%i \n", calcolaNOTail(parola, strlen(parola) + 1));
    printf("%i", calcolaTail(parola, 0, strlen(parola) + 1));
}