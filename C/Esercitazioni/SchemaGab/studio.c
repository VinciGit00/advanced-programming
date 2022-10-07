#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// IMPORTANTE
// Quando uso * -> accedo ai valori
// Quando non uso * -> accedo alla cella di memoria

void f1(int *p1)
{
    *p1 = 10;
}

void f2(int *p1)
{
    // Incremento la posizione a cui puntare
    p1 = p1 + 2;
    // p1 += 2;
    printf("%i \n", *p1);
}

void f3(char *p2)
{
    for (int i = 0; i < strlen(p2); i++)
    {
        if (*(p2 + i) == 'a')
            *(p2 + i) = 'A';
    }
}

void stampa(char *c)
{
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", *(c + i));
    }
    printf("\n");
}

// Puntatore a puntatore
void pointTopoint(int **p)
{
    *p = *p + 2;
    **p = 50;
    // Se voglio modificare il contenuto di un indirizzo più avanti
    //*(*p+2) = 4;
}

int main()
{
    // Dichiarazione e assegnamento
    // Scalari
    // interi
    int a = 2;
    int *p1 = &a;
    // Array
    //  Stringhe
    char stringa[] = "parola";

    // Si può mettere anche
    // char *p2 = &stringa;
    char *p2 = stringa;
    printf("%c \n", *p2);

    // Passa la lettera a
    p2 = stringa + 1;
    printf("%c \n", *p2);

    // Passa la lettera a
    char *p3 = &stringa[1];
    *p3 = *(stringa + 1);
    printf("%c \n", *p3);
    // Array
    //   Interi

    int c[] = {1, 2, 3};
    int *p4 = c;
    // Oppure
    p4 = c;
    printf("%i \n", *p4);

    // Utilizzo nelle funzioni
    // Scalari
    int scalar = 2;
    printf("Prima: %i \n", scalar);
    f1(&scalar);
    printf("Dopo: %i \n", scalar);

    // Vettori
    int vettore[] = {1, 2, 3, 4};
    f2(vettore);
    printf("%i \n", vettore[0]);

    // Con i char
    char vettoreChar[] = "Marco";
    // char *p5 = vettoreChar + 1;
    char *p5 = vettoreChar;
    stampa(vettoreChar);
    f3(p5);
    stampa(vettoreChar);

    // Algebra dei puntatori
    // Per incrementare la cella di memoria a cui puntare si usa l'algebra dei puntatori
    int arrayinteri[] = {1, 2, 3, 4};
    int *p6 = arrayinteri;
    // Posso incrementare la cella a cui puntare tramite l'algebra dei puntatori;
    p6 += 2;

    // Posso farlo anche con i char
    char arrayInteri[] = "arrayInteri";
    char *p7 = arrayInteri;
    p7 += 2;

    // Puntatore a puntatore

    int arrapointopoint[] = {1, 2, 150};
    int *p8 = arrapointopoint;
    printf("%i \n", *p8);
    pointTopoint(&p8);
    printf("%i  \n", *p8);
    printf("%i  \n", arrapointopoint[2]);

    // Malloc
    // Permette di creare delle zone di memoria dinamica nello heap
    // Serve per creare array
}