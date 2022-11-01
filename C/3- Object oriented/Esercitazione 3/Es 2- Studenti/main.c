
#include <stdio.h>
#include <string.h>

#include "Studente.c"
#include "StudenteInterface.h"

#include "CorsiInterface.h"
#include "CorsiImplemented.c"

int main(int argc, char const *argv[])
{
    studentpointer s1, s2, s3;

    s1 = makeStudent("Marco", "Vinciguerra");
    s2 = makeStudent("Gabriele", "Marchesi");
    s3 = makeStudent("Simone", "Capeletti");

    printstudent(s1);
    char *result = studentData(s1);
    printf("%s \n", result);

    addVoto(s1, 28);
    addVoto(s1, 29);
    addVoto(s1, 20);

    stampaMedia(s1);

    // Parte dell'inizializzazione del corso
    corsopointer c1;
    c1 = mkCorso("Algebra e logica");

    addStudent(c1, s1);
    addStudent(c1, s2);
    addStudent(c1, s3);

    // Print
    printcourse(c1);

    // Delete
    deletecourse(&c1);
    deleteStudent(&s1);

    // Ogni volta che uso una malloc devo liberarla, anche per le string
    free(result);
}
