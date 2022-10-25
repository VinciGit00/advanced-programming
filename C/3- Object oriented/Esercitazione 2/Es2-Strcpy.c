#include <stdio.h>
#include <string.h>

void modify(char *a)
{
    strcpy(a, "Franchino");
}

int main(int argc, char const *argv[])
{

    char a[] = "Marco";
    char b[] = "Gabriele";

    printf("%s %s \n", a, b);

    modify(a);
    printf("%s %s \n", a, b);

    printf("%d \n", sizeof(a));
    printf("%d \n ", sizeof(b));

    printf("%i \n", a);
    printf("%i \n ", b);
}