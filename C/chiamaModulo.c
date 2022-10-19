#include <stdio.h>

extern int ora;
extern void printStudente();

int main(int argc, char const *argv[])
{
    ora = 1600;
    printf("%d", ora);
}
