#include <iostream>
using namespace std;

class Mobile
{
    int size;

public:
    Mobile(int h) : size(h) { std::cout << "M "; }
    ~Mobile() { std::cout << " DISTRUGGI M"; }
};

class Scrivania : Mobile
{
public:
    Scrivania() : Mobile(100) { std::cout << "S" << std::endl; }
    ~Scrivania() { std::cout << " DISTRUGGI S "; }
};

int main(int argc, char **argv)
{
    Scrivania a;
}