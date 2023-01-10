#include <iostream>
using namespace std;

class Libro
{
private:
    string title;
    int anno;

public:
    Libro(string, int);
    virtual ~Libro();
    void stampaInfo();
};