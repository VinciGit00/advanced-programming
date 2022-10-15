
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[] = "Marco";
    char string2[] = "Franco";
    char *p;

    p = &string;

    // Incrementa la zona a cui punta il puntatore
    printf("%c \n", *p);
    p++;
    printf("%c\n", *p);

    printf("%c", *(p + 6));
}
