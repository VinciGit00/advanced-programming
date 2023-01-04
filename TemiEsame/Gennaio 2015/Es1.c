#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool palindroma(char *parola)
{
    for (int i = 0; i < strlen(parola) / 2; i++)
    {
        if ((*(parola + i)) != (*(parola - 1 - i + strlen(parola))))
            return false;
    }
    return true;
}

bool palindromaNoTail(char *parola, int index)
{
    if (index == strlen(parola) / 2)
        return true;
    if ((*(parola + index)) != (*(parola - 1 - index + strlen(parola))))
        return false && palindromaNoTail(parola, ++index);

    return true && palindromaNoTail(parola, ++index);
}

bool palindromaTail(char *parola, int index)
{
    if (index == strlen(parola) / 2)
        return true;
    if ((*(parola + index)) != (*(parola - 1 - index + strlen(parola))))
        return false;

    return palindromaTail(parola, ++index);
}

bool palindromaTailInit(char *parola)
{
    return palindromaTail(parola, 0);
}
bool result;
int main()
{
    char *parola = "anna";

    result = palindroma(parola);

    printf("%d\n", result);
    /*
        bool r2 = palindromaTailInit(parola);
        printf("%d \n", r2);

        bool r3 = palindromaNoTail(parola, 0);
        printf("%d \n", r3);
        */
}
