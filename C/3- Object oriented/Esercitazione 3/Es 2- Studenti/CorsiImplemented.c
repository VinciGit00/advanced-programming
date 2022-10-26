
#include <stdio.h>
#include <string.h>
#include "Studente.c"
#include "CorsiInterface.h"
#include "StudenteInterface.h"

struct corso
{
    char name[40];
    struct student *students;
    int nStudent;
};

corsopointer mkCorso(char nome[40])
{
    corsopointer res = malloc(sizeof(struct corso));
    res->students = NULL;
    res->nStudent = 0;
    return res;
}

void addStudent(corsopointer c, studentpointer s)
{

    struct student *sttemp = malloc(sizeof(struct student) * c->nStudent);

    for (int i = 0; i < c->nStudent; i++)
    {
        *(sttemp + i * sizeof(struct student)) = *(c->students + i * sizeof(struct student));
    }

    *(sttemp + c->nStudent * sizeof(struct student)) = *s;

    c->nStudent++;

    free(c->students);

    c->students = sttemp;
}

void deletecourse(corsopointer *s)
{
    free((*s)->students);
    free(*s);
    *s = NULL;
}