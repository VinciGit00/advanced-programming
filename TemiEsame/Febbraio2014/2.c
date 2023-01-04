#include <stdio.h>
#include <stdbool.h>

bool strlunPari(char *parola)
{

    bool flag = true;
    for (int i = 0; i < strlen(parola); i++)
    {
        if ((i + 1) % 2 == 0)
            flag = true;
        else
            flag = false;
    }
    return flag;
}




int main(int argc, char const *argv[])
{
    printf("ciao");
}
