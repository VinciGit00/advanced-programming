class Figura
{
public:
    virtual void calcolaArea(){};
};
class Quadrato : public Figura
{
public:
    void getLato() {}
};
class Triangolo : private Figura
{
};

void foo()
{
    Figura *f = new Quadrato;
    f->calcolaArea();
    // Figura *f2 = Triangolo;
    // f2->calcolaArea();
}
