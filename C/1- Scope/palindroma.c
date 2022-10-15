#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindroma(char *s, int dim)
{
    int i = 0;
    while (i < dim)
    {
        if (*(s + i) != *(s + dim - i - 1))
            return false;
        i++;
    }

    return true;
}

// Finire di scrivere
bool palindroma2(char *s, int dim)
{
    char *start = s;
    char *end = s + dim - 1;
    // for (; start < end, *start++)
    //{
    //    }

    return true;
}

int main(void)
{
    char s1[] = "abba";
    printf("%i ", palindroma(&s1, strlen(s1)));
    char s2[] = "franco";
    printf("%i \n", palindroma(&s2, strlen(s2)));
}