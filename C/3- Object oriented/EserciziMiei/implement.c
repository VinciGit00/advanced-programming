#include "interface.h"
#include <stdlib.h>

struct struttura
{
    char *name;
    char *surname;
    int number;
};

struttura_pointer mk_counter(char *name, char *surname, int number)
{
    struttura_pointer res = malloc(sizeof(struct struttura));

    res->name = name;
    res->surname = surname;
    res->number = number;

    return res;
}

void setname(struttura_pointer p, char *name)
{
    p->name = name;
}

void setsurname(struttura_pointer p, char *surname)
{
    p->surname = surname;
}

void setNumber(struttura_pointer p, int number)
{
    p->number = number;
}

char *getname(struttura_pointer p)
{
    return p->name;
}

char *getsurname(struttura_pointer p)
{
    return p->surname;
}

int getNumber(struttura_pointer p)
{
    return p->number;
}

void deleteall(struttura_pointer p)
{
    free(p);
    p = NULL;
}