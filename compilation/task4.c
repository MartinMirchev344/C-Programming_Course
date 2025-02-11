#include <stdio.h>

#define ARR_SIZE 5

int main()
{
    printf("Original array:\n");
    long array[5] = {4,3,2,5,1};

    printf("Changed array:\n");

    for(int i = 0; i < ARR_SIZE; i++)
    {
        array[i] = pow(array[i], 4);
        printf("%d ", array[i]);
    }

    

    return 0;
}