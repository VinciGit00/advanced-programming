
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "CorsiInterface.h"
#include "StudenteInterface.h"

struct corso
{
    char *n;

    // Contiene tutti gli studenti
    // Puntatore ad un puntatore perchè è un vettore
    // Per allocare un array
    // studentpointer s[10];

    studentpointer *s;
    int nstudent;
};

corsopointer mkCorso(char *string)
{
    corsopointer res = malloc(sizeof(struct corso));
    // Perchè devo aggiungere il terminatore
    res->n = malloc(sizeof(char) * strlen(string) + 1);
    strcpy(res->n, string);

    // Non alloco niente per gli studenti perchè inizialmente ne ho 0
    res->s = NULL;
    res->nstudent = 0;
    return res;
}

void addStudent(corsopointer c, studentpointer student)
{

    // Metto * perchè è un vettore di studenti
    studentpointer *temp = malloc(sizeof(studentpointer) * (c->nstudent + 1));

    for (int i = 0; i < c->nstudent; i++)
    {
        // Faccio cambiare il puntatore
        *(temp + i) = *(c->s + i);
    }

    *(temp + c->nstudent) = student;

    c->nstudent++;
    free(c->s);
    c->s = temp;
}

void printcourse(corsopointer c)
{
    studentpointer *f = c->s;

    printf("%s \n", c->n);

    for (int i = 0; i < c->nstudent; i++)
    {
        studentpointer *parola = *(c->s + i);
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