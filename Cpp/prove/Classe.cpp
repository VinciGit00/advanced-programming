#include <iostream>
using namespace std;

class MyClass
{
public:
    void hello(int i)
    {
        cout << i << "\n";
    };

    // Questo si può fare
    string hello(){

    };

    // Non si può fare
    /*string hello(int i)
    {
        return "hi";
    };*/
};

int main(int argc, char const *argv[])
{
    MyClass c;
    c.hello(2);
}
