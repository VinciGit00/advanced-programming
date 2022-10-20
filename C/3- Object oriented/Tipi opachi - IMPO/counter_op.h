
#ifndef COUNTER_OP_H
#define COUNTER_OP_H

// Il primo è il nome della struttura, il secondo è il nome del puntatore
// Un counter è un int
typedef struct contatore *contatore_pointer;

// Uso un puntatore pointer solo perchè è più facile
contatore_pointer mk_counter();

int getvalue(contatore_pointer);

void inc(contatore_pointer);

// Distrugge il contatore e libera la memoria

void delete (contatore_pointer *);

#endif
