#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void cambiaPrimalettera(char **p)
{
    **p = 'A';
}

void cambiaLettera(char **p)
{
    for (int i = 0; i < strlen(*p); i++)
    {
        if (*(*p + i) == 'a')
        {
            *(*p + i) = 'A';
        }
    }
}

void stampa(char *word)
{
    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c", *(word + i));
    }
    printf("\n");
}

int main()
{
    char lettera[] = "marco";
    char *p = lettera;
    stampa(lettera);
    cambiaPrimalettera(&p);
    stampa(lettera);

    char parola[] = "gabriele";
    char *p2 = parola;
    stampa(parola);
    cambiaLettera(&p2);
    stampa(parola);
}