#include <stdio.h>
#include <stdlib.h>

struct prova
{
    int a;
};

int main(int argc, char const *argv[])
{
    struct prova *p = malloc(sizeof(struct prova));

    p->a = 2;

    printf("%d\n", p->a);

    free(p);

    printf("%d\n", p->a);
    char *d = malloc(sizeof(char));
    *d = "a";

    printf("%d", p->a);
}
