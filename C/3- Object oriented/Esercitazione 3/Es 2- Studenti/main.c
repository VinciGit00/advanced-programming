
#include <stdio.h>
#include <string.h>

#include "Studente.c"
#include "StudenteInterface.h"

int main(int argc, char const *argv[])
{
    studentpointer s1;

    s1 = makeStudent("Marco", "Vinciguerra", 1064889);

    printstudent(s1);
    char *result = studentData(s1);
    printf("%s \n", result);

    addVoto(s1, 28);
    addVoto(s1, 29);
    addVoto(s1, 20);

    stampaMedia(s1);

    free(result);
}
