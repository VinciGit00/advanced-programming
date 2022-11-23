#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindromoLoop(char *p)
{
    for (int i = 0; i < strlen(p) / 2; i++)
    {
        if (*(p + i) != *(p + strlen(p) - 1 - i))
        {
            return false;
        }
    }

    return true;
}

bool palindromoNotail(char *p, int dim, int index)
{
    int dim2 = dim / 2;
    if (index > dim2)
    {
        if (*p != *(p + dim - index))
        {
            return false;
        }
        return palindromoNotail(p + 1, dim, index - 1);
    }
    return true;
}

bool palindromoTail(char *p, int dim, int index, bool result)
{
    int dim2 = dim / 2;
    if (index > dim2)
    {
        if (*p != *(p + dim - index))
        {
            result = false;
        }
        return palindromoTail(p + 1, dim, index - 1, result);
    }
    return result;
}

// True:  1
// False: 0
// Variabili globali
bool result;

int main()
{
    char *parola = "anna";
    result = palindromoLoop(parola);
    printf("%d \n", result);

    bool result2 = palindromoNotail(parola, strlen(parola), strlen(parola));
    printf("%d \n", result2);

    bool temp = 1;
    bool result3 = palindromoTail(parola, strlen(parola), strlen(parola), temp);
    printf("%d \n", result3);
}