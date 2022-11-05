#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct struttura
{
    int a;
};

// Non genera un memory leak perchè alloco la memoria con la malloc
struct struttura *fun2()
{
    struct struttura *p = malloc(sizeof(struct struttura));
    p->a = 2;

    return p;
}

int main(int argc, char const *argv[])
{
    struct struttura *p = fun2();
    // Genera un valore a caso

    printf("%i", p->a);

    struct struttura *p2;
    free(p);
    p = NULL;

    p2 = p;
    printf("%i", p2->a);
}
