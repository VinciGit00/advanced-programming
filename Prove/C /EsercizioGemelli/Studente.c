#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "StudentInterface.h"

struct studente
{
    char *name;
    char *surname;
    int nvoti;
    int *voti;
};

studentpointer makestudent(char *n, char *s)
{
    studentpointer res = malloc(sizeof(struct studente));
    res->name = malloc(sizeof(char) * (sizeof(n) + 1));
    strcpy(res->name, n);

    res->surname = malloc(sizeof(char) * (sizeof(s) + 1));
    strcpy(res->surname, s);

    res->nvoti = 0;
    return res;
}

void addVoto(studentpointer s, int n)
{
    int *p = malloc((s->nvoti + 1) * sizeof(int));

    for (int i = 0; i < s->nvoti + 1; i++)
    {
        (*(p + i)) = (*(s->voti + i));
    }
    s->nvoti = s->nvoti + 1;

    free(s->voti);
    s->voti = p;
    free(p);
}

void printstudent(studentpointer s)
{
    printf("Name: %s, surname: %s \n", s->name, s->surname);
}

char *studentData(studentpointer s)
{
    char *r = malloc(sizeof(char) * (sizeof(s->name) + sizeof(s->surname) + 3));
    sprintf(r, "%s%s", s->name, " ");
    sprintf(r, "%s%s", r, s->surname);
    return r;
}

void deleteStudente(studentpointer *s)
{
    free((*s)->voti);
    free((*s)->name);
    free((*s)->surname);
}