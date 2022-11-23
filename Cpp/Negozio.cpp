class Negozio
{
    void prendiOrdine()
    {
    }
};

class Furgone
{
    int numerodiruote()
    {
        return 4;
    }
};

class Ambulante : Furgone, Negozio
{
};
