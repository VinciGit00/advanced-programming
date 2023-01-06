#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isNumber(char a)
{
    if (a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9')
        return true;
    return false;
}

char *togliNumeriNoTail(char *a)
{

    if (*a == '\0')
    {
        char *result = malloc(sizeof(char));
        result[0] = 0;
        return result;
    }

    char *rec = togliNumeriNoTail(a + 1);

    if (isNumber(*a))
        return rec;

    char *result = malloc((strlen(rec) + 2) * sizeof(char));
    sprintf(result, "%c%s", *a, rec);

    free(rec);

    return result;
}

char *vocalizza_rec_noTail(char *s)
{

    if (*s == '\0') // Oppure strlen(s)==0
    {
        char *result = malloc(sizeof(char));
        result[0] = 0;
        return result;
    }
    char *rec = vocalizza_rec_noTail(s + 1);

    if (isNumber(*s))
        return rec;

    char *result = malloc((strlen(rec) + 2) * sizeof(char));
    sprintf(result, "%c%s", *s, rec);
    free(rec);

    return result;
}

char *togliNumeriIt(char *a)
{
    char *r = malloc(sizeof(char) * strlen(a) + 1);
    r[0] = 0;
    int index = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        if (!isNumber(*(a + i)))
        {
            sprintf(r, "%s%c", r, *(a + i));
        }
    }
    return r;
}

char *togliNumeriTail(char *a, char *result)
{

    if (*a == '\0')
    {
        return result;
    }

    if (!isNumber(*a))
    {
        // Ricordati di prendere il valore puntato;
        sprintf(result, "%s%c", result, *a);
    }

    return togliNumeriTail(a + 1, result);
}

char *togliNumeriTailInit(char *a)
{
    char *result = malloc((sizeof(char) + 1) * strlen(a));
    result[0] = 0;
    return togliNumeriTail(a, result);
}

int main(int argc, char const *argv[])
{
    char *p = "a23r";
    printf("%s \n", togliNumeriTailInit(p));
    printf("%s \n", togliNumeriNoTail(p));
    printf("%s \n", togliNumeriIt(p));

    printf("%s \n", vocalizza_rec_noTail(p));
}
