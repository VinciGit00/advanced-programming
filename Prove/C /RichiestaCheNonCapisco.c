#include <stdio.h>
#include <string.h>

struct person
{
    int age;
};

struct person *foo(int age)
{
    struct person p = {1};
    return &p;
}

int main(int argc, char const *argv[])
{
    struct person *result = foo(20);

    printf("%d", result->age);
}
