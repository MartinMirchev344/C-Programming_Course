#include <stdio.h>

#define SIZE 5

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}