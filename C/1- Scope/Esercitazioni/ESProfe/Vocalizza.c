#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool vocale(char);
char *vocalizza_it(char *);

// Singolo carattere bisogna fare un confronto con le singole apici
bool vocale(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Restituisce un puntatore/stringa
char *vocalizza_it(char *s)
{
    // Voglio creare una stringa nuova da restituire;
    // Non va bene char result[100]; //Problema: la dimensione è fissa, potrei mettere strlen result[strlen(s)+1]
    // Non va bene perchè quando finisce il metodo punta su un record dello stack che non vale più
    // e quella zona di memoria non è più valida
    //.. scorro
    // Quindi devo usare un malloc
    // return result;

    // Serve per allocare il risultato
    // Gli faccio allocare strlen(s) + 1 byte per la gestione del terminatore
    char *result = malloc((strlen(s) + 1) * sizeof(char));
    result[0] = '\0';
    // Per riempire i caratteri uso sprintf per concatenare
    for (; *s != '\0'; s++)
    {
        if (vocale(*s))
        {
            // concateno
            sprintf(result, "%s%c", result, *s);
        }
    }
    return result;
}

// Ricorsiva senza tail
// base della ricorsione: se la stringa è vuota ritorna una stringa vuota
// Se il primo carattere è una vocale lo concateno altrimenti rimane uguale e vado avanti
char *vocalizza_rec_noTail(char *s)
{
    // base: stringa vuota -> Crea il risultato e aggiunge il terminatore
    // Si entra quando fnisce la lista
    if (*s == '\0') // Oppure strlen(s)==0
    {
        char *result = malloc(sizeof(char));
        result[0] = 0;
        return result;
    }
    // Risultato temporaneo -> singola lettera
    char *rec = vocalizza_rec_noTail(s + 1);
    if (!vocale(*s))
        return rec;
    // Altrimenti concatena s[0] con rec
    // +2 perchè 1 è il terminatore e l'altro è la lettera del risultato
    char *result = malloc((strlen(rec) + 2) * sizeof(char));
    sprintf(result, "%c%s", s[0], rec);
    // Libero il malloc precedente
    free(rec); // Altrimenti butto via memoria
    return result;
}

char *vocalizza_tail_help(char *s, char *result)
{
    // Se s è vuota finita return result
    // Se s[0] è vocale aggiungilo a result e continua da s+1
    // Se s[0] non  è vocale continua da s+1
    if (*s == 0) // fine
        return result;
    if (vocale(s[0]))
    {
        sprintf(result, "%s%c", result, s[0]);
    }
    return vocalizza_tail_help(s + 1, result);
}

char *vocalizza_tail(char *s)
{
    char *result = malloc((strlen(s) + 1) * sizeof(char));
    result[0] = '\0';
    return vocalizza_tail_help(s, result);
}

int main()
{
    char nome[] = "angelo"; // nome ha 6 caratteri + il terminatore, quindi 7

    char *res = vocalizza_it(nome);

    char *res2 = vocalizza_rec_noTail(nome);

    char *res3 = vocalizza_tail(nome);

    printf("iterativa vecchia: %s, nuova: %s \n", nome, res);
    printf("ricorsiva vecchia: %s, nuova: %s \n", nome, res2);
    printf("ricorsiva vecchia: %s, nuova: %s", nome, res3);

    free(res3);
}