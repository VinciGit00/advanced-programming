#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int calcolaLoop(char *);
int calcolaNOTail(char *, int);
int calcolaTail(char *, int);
int calcolaTail_helper(char *, int, int);

int calcolaLoop(char *array)
{
    int somma = 0;
    for (int i = 0; i < strlen(array); i++)
    {
        somma += (i + 1) * *(array + i);
    }
    return somma;
}
int calcolaNOTail(char *array, int len)
{

    if (*array == 0)
        return 0;

    return *(array) * (len - strlen(array) + 1) + calcolaNOTail(++array, len);
}

int calcolaTail_helper(char *array, int sum, int len)
{
    if (*array == 0)
        return sum;
    return calcolaTail_helper(array + 1, sum + *array * (len - strlen(array) + 1), len);
}

int calcolaTail(char *array, int len)
{
    return calcolaTail_helper(array, 0, len);
}

int main()
{
    char parola[] = "abc";
    printf("%i \n", calcolaLoop(parola));

    printf("%i \n", calcolaNOTail(parola, strlen(parola)));

    printf("%i", calcolaTail(parola, strlen(parola) + 1));
}