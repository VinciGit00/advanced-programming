#include <stdio.h>
#include <stdlib.h>

void function(int *p)
{
    printf("%d \n", *p);
    (*p)++;
}

int main()
{
    int array[] = {1, 2, 3};
    function(array);

    printf("%d", *array);
}