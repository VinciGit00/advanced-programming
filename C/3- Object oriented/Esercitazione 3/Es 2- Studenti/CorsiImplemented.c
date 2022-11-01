
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "CorsiInterface.h"
#include "StudenteInterface.h"

struct corso
{
    char *n;
    // Contiene tutti gli studenti
    studentpointer s;
    int nstudent;
};

corsopointer mkCorso(char *string)
{
    corsopointer res = malloc(sizeof(struct corso));
    // Perchè devo aggiungere il terminatore
    res->n = malloc(sizeof(char) * strlen(string) + 1);
    strcpy(res->n, string);
    res->s = NULL;
    res->nstudent = 0;
    return res;
}

void addStudent(corsopointer c, studentpointer student)
{
    studentpointer temp = malloc(sizeof(studentpointer) * (c->nstudent + 1));

    for (int i = 0; i < c->nstudent; i++)
    {
        temp[i] = *(c + i * sizeof(studentpointer))->s;
    }
    temp[c->nstudent * sizeof(studentpointer)] = *student;

    c->nstudent++;
    free(c->s);
    c->s = temp;
}

void printcourse(corsopointer c)
{
    studentpointer *f = c->s;

    printf("%s", c->n);

    for (int i = 0; i < c->nstudent; i++)
    {
        studentpointer *parola = *(f + i*(c->+));
        printf("%s \n", parola);
    }
}

void deletecourse(corsopointer *c)
{
    // Per ogni malloc creata devo liberare la malloc
    free((*c)->n);
    free((*c)->s);
    free(*c);
    c = NULL;
}