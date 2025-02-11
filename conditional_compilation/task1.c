#include <stdio.h>

#define DEBUG

void sort_and_sum_of_divided_by_3(int arr[], int size)
{
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 3 == 0)
        {
            sum += arr[i];
        }
    }

    printf("The sum of the elements dividable by 3 is %d\n", sum);
}

int main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_and_sum_of_divided_by_3(arr, size);

    #ifdef DEBUG

    printf("Array: \n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Elements on indexes that are devidable by 3: \n");

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 3 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    #endif

    


    return 0;
}