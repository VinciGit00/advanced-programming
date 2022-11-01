#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct struttura
{
    int a;
};

// Genera un memory leak perchè non alloco la malloc
struct struttura *fun1()
{
    struct struttura p = {1};

    return &p;
}

// Non genera un memory leak perchè alloco la memoria con la malloc
struct struttura *fun2()
{
    struct struttura *p = malloc(sizeof(struct struttura));
    p->a = 2;

    return p;
}

// Uso la free troppo presto
struct struttura *fun3()
{
    struct struttura *p = malloc(sizeof(struct struttura));
    p->a = 2;

    free(p);
    return p;
}

int main(int argc, char const *argv[])
{
    struct struttura *p = fun1();
    // Genera un valore a caso

    printf("%i", p->a);
}
