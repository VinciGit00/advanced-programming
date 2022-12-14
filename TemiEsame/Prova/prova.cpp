
#include <iostream>
#include <stdlib.h>

void function(int a[])
{
    int b = (*a)++;
    std::cout << a[0];
    std::cout << b;
}

int main()
{

    int a[] = {1, 2, 3};
    function(a);
    std::cout << a[0];
}
