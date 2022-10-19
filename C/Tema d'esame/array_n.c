

/**
 * Realizza tramite tipi opachi un array di n interi in cui n viene passato come parametro a costruttore
 */

typedef struct arrayint *arrayintref;

arrayintref make(int n);
void delete (arrayintref a);

struct arrayint
{
    // Faccio un buffer di dimensione variabile per generare il puntatore
    int *data;
    int n;
};

// Restituisco il puntatore alla strutura
arrayintref make(int n)
{
    arrayintref res = malloc(sizeof(struct arrayint));

    res->data = malloc(sizeof(int) * n);
    res->n = n;
    return res;
}

// Ho il distruttore
void delete (arrayintref a)
{
    free(a->data);
    free(a);
}

main(int argc, char const *argv[])
{
    arrayintref r1 = make(6);
}
