void hhhh();

class Oggetto
{
    int peso;
    friend void hhhh();
};

struct OggettoS
{
    int peso;
};

void foo()
{
    // errore
    // Oggetto p; p.peso = 10;
    OggettoS s;
    s.peso = 1000;
}

void hhhh()
{
    Oggetto o;
    o.peso = 10;
}