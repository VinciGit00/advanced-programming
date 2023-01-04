#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo()
{

    char *parola = malloc(sizeof(char) * 5);
    strcpy(parola, "ciao");
    return parola;
}

int main(int argc, char const *argv[])
{
    char *parola = foo();
    // Sono due scritture differenti
    printf("%c \n", *parola);
    printf("%s \n", parola);
}