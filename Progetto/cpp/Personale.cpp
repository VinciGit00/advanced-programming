#include <string>
#include <iostream>

using namespace std;

// Classes
class Personale
{
public:
    Personale(string, string, string);
    ~Personale();
    string getName();
    string getSurname();
    string getBirthday();

private:
    string name;
    string surname;
    string birthday;
};

// Methods
Personale::Personale(string n, string s, string b)
{
    name = n;
    surname = s;
    birthday = b;
}