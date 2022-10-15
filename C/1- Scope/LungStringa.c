#include <stdio.h>

int main()
{
    char s1[] = {'a', 'b', NULL};
    char s2 = {'a', 'b', '/0'};
    char s3 = {'a', 'b', 0};
    printf("s1: %s, lunghezza: %i", strlen(s1));
    return 0;
}
