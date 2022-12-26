#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void increment(int *k)
{
    (*k)++;
    // k++;
}

int main(int argc, char const *argv[])
{
    int array[] = {1, 10, 8, 17, 9};

    printf("%d \n", *array);

    increment(array);

    printf("%d \n", *array);
}
