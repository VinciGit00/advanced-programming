#include <stdio.h>

int *create_array()
{
    int array[5] = {1, 2, 3, 4, 5};
    return array;
}

int main(void)
{
    int *ptr = create_array();
    int a = 10;
    printf("%d\n", *ptr); // prints 1

    printf("%d\n", *(ptr + 2)); // this would cause a segfault, because ptr is a dangling pointer
}
