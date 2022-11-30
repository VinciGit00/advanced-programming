#include <iostream>
using namespace std;

class Duck
{
public:
    int x;
    int *p;
    Duck() { p = new int, x = 10; }
    Duck(const Duck &d)
    {
        this->x = d.x;
        this->p = new int;
        *(this->p) = *(d.p);
    }
    /*  Duck &operator=(const Duck &d)
      {
          return d;
      }
      */
};

int main(int argc, char const *argv[])
{
    Duck d1;
    Duck d2(d1);

    cout << d1.x << " " << d2.x << " " << *(d1.p) << " " << *(d2.p) << endl;

    d2.x = 100;
    *(d2.p) = 1600;

    cout << d1.x << " " << d2.x << " " << *(d1.p) << " " << *(d2.p) << endl;

    Duck d3 = d2;
}
