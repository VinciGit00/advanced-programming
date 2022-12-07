#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            if (*(p + i) > *(p + j))
            {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

void recursiveBubbleSort(int *p, int dim, int i, int j)
{
    if (*(p + i) > *(p + j))
    {
        int temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
    }

    if (i == dim - 1)
        return;

    if (j == dim - 1)
    {
        j = i + 1;
        return recursiveBubbleSort(p, dim, i + 1, j);
    }

    return recursiveBubbleSort(p, dim, i, j + 1);
}

void recursiveBubbleSortHelper(int *p, int dim)
{
    recursiveBubbleSort(p, dim, 0, 1);
}

void printArray(int *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int a1[] = {-6, 7, -9, 1, 3};
    int a2[] = {-6, 7, -9, 1, 3};
    int dim = sizeof(a1) / sizeof(int);
    bubbleSort(a1, dim);
    printArray(a1, dim);

    dim = sizeof(a2) / sizeof(int);
    recursiveBubbleSortHelper(a2, dim);
    printArray(a2, dim);

    int a3[] = {0, 1, 2, 4};
    int a4[] = {0, 1, 2, 4};

    dim = sizeof(a3) / sizeof(int);
    bubbleSort(a3, dim);
    printArray(a3, dim);

    dim = sizeof(a4) / sizeof(int);
    recursiveBubbleSortHelper(a4, dim);
    printArray(a4, dim);
}
