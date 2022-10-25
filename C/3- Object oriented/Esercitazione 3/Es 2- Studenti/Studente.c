#include "StudenteInterface.h"
#include <stdlib.h>

struct student
{
    char name[30];
    char *surname;
    int matricola;
    int nvoti;
    int *voti;
};

studentpointer makeStudent(char n[30], char *c, int matricola)
{
    studentpointer res = malloc(sizeof(struct student));
    strcpy(res->name, n);
    res->surname = malloc(sizeof(char) * strlen(c));
    strcpy(res->surname, c);

    res->nvoti = 0;
    res->matricola = matricola;

    return res;
}

void addVoto(studentpointer s, int voto)
{
    int *temp = malloc(sizeof(s->nvoti) + 1);

    for (int i = 0; i < s->nvoti; i++)
    {
        *(temp + i) = *(s->voti + i);
    }

    *(temp + s->nvoti) = voto;
    s->nvoti++;

    free(s->voti);
    s->voti = temp;
}

void printstudent(studentpointer s)
{
    printf("Name: %s, surname: %s \n", s->name, s->surname);
}
char *studentData(studentpointer s)
{
    // Name: 4 lettere
    // Surname: 7 lettere
    // Ulteriori 3 spazi
    char *result = malloc(sizeof(char) * (strlen(s->name) + strlen(s->surname)));
    sprintf(result, "%s%s", "name ", s->name);
    sprintf(result, "%s%s", result, ", surname: ");
    sprintf(result, "%s%s", result, s->surname);

    return result;
}
void stampaMedia(studentpointer s)
{
    float res = 0;
    for (int i = 0; i < s->nvoti; i++)
    {
        res += *(s->voti + i);
    }
    res /= s->nvoti;

    printf("Media: %f", res);
}

void deleteStudent(studentpointer s)
{
    // Per ogni malloc faccio una delete
    free(s->surname);
    free(s->voti);
    free(s);
    s = NULL;
}