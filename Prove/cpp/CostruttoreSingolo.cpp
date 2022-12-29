
#include <iostream>
#include <stdlib.h>
using namespace std;

class OBJ
{
public:
    OBJ(int);
    ~OBJ();

private:
    int time;
};

OBJ::~OBJ()
{
    cout << "Classe distrutta \n";
}

OBJ::OBJ(int n)
{
    time = n;
}

int main(int argc, char const *argv[])
{
    OBJ o1(1);
    OBJ o2 = OBJ(1);
    OBJ o3 = (OBJ)1;
}
