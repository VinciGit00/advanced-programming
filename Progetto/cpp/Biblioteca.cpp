#include <iostream>
#include <vector>
#include "Libro.cpp"
using namespace std;
class Biblioteca
{
private:
    vector<Libro> v;

public:
    void addLibro(Libro);
    void removeLibro(Libro);
    void stampa();
};