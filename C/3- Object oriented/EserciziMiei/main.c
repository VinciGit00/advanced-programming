#include <stdio.h>

#include "interface.h"
#include "implement.c"

// Testo le ADT
int main(int argc, char const *argv[])
{
    struttura_pointer s1;

    s1 = mk_counter("Marco", "Vinciguerra", 1064889);

    printf("%s \n", s1->name);

    printf("%s \n", getname(s1));

    setname(s1, "Franco");

    printf("%s", s1->name);

    // Elimino tutto
    deleteall(s1);
}