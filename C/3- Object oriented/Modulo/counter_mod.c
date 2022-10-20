#define N_contatori 100

static contatori[N_contatori];

// non è possibile accedere al di fuori dell'interfaccia
static int contatore;

void reset()
{
    contatore = 0;
}

void reset2(int i)
{
    contatori[i] = 0;
}

void inc2(int i)
{
    contatori[i]++;
}

void inc()
{
    contatore++;
}

int get_value() { return contatore; }