#include <stdio.h>

void modify(int *a)
{

    *(a - 1) = 1000;
}

int main(int argc, char const *argv[])
{

    int x = 0;
    int y = 10;

    printf("%d %d \n", x, y);

    modify(&x);

    printf("%d %d \n", x, y);

    printf("lu ", sizeof(int));
}
