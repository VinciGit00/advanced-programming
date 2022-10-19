
#ifndef COUNTER_INT_H
#define COUNTER_INT_H

// Un counter è un int
typedef int contatore;

void reset(contatore *);
void incrementa(contatore *);

// Potrei passare anche il puntatore, non cambia niente, ma il puntatore occupa meno spazio
int get_value(contatore);

#endif
