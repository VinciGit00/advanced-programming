#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int Aloop(char *p)
{
    int count = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        if (*(p + i) == 'a' || *(p + i) == 'A')
        {
            count++;
        }
    }
    return count;
}

int ANoTail(char *p)
{
    if (*(p) != '\0')
    {
        if (*p == 'a' || *p == 'A')
            return 1 + ANoTail(p + 1);
        return ANoTail(p + 1);
    }

    return 0;
}

int Atail(char *p, int result)
{
    if (*(p) != '\0')
    {
        if (*p == 'a' || *p == 'A')
            return Atail(p + 1, result + 1);
        return Atail(p + 1, result);
    }

    return result;
}

int Atailhelper(char *p)
{
    return Atail(p, 0);
}

int main()
{
    char *AAA = "AB";
    printf("%d \n", Aloop(AAA));

    printf("%d \n", Atailhelper(AAA));

    printf("%d", ANoTail(AAA));
}