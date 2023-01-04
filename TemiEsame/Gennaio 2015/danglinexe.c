#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof *ptr); // dynamically allocate memory for an int
    *ptr = 10;                      // store the value 10 in the allocated memory
    printf("%d\n", *ptr);           // prints 10
    free(ptr);                      // deallocate the memory
    // ptr = NULL;                     // set the pointer to NULL to avoid a dangling pointer
    printf("%d\n", *ptr);
    return 0;
}