#include <stdio.h>

int main()
{
    int array[6] = {1, 7, 3, 4, 9, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[i] > array[j])
            {
                int change = array[i];
                array[i] = array[j];
                array[j] = change;
            }
        }
    }


    for(int i = 0; i < size; i++)
    {
        sum += i * array[i];
    }

    printf("Sum of products of indixes and array elements: %d\n", sum);

    return 0;
}