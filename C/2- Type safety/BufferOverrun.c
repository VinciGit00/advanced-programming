
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Con una stringa
    char c[2] = "Marco";
    printf("%c \n", c);

    // Con un malloc
    char *p = malloc(4);
    *p = "Franco";
    printf("%c", *p);
}