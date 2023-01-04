#include <stdio.h>
#include <stdlib.h>

struct punto
{
    int x;
};

int main(void)
{

    struct punto *r = malloc(sizeof(struct punto));

    r->x = 2;
    printf("%i\n", r->x);

    free(r);

    printf("%i \n", r->x);
}