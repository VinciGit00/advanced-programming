#include <string>
#include <iostream>

using namespace std;

string foo()
{
    return "ciao";
}
int main(int argc, char const *argv[])
{
    string greeting = foo();
    cout << greeting;
}
