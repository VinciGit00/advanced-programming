
#define N_contatori 100

static contatori[N_contatori];

static int contatore;

void reset()
{
    contatore = 0;
}

/**
 * void reset(index i) {
 *  contatori[i] = 0
 * }
 * void inc(index i)
 *{
 *   contatori(i)++;
 *}
 */

void inc()
{
    contatore++;
}

int get_value() { return contatore; }