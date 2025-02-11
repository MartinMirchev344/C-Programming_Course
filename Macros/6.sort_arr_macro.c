#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A;\
    A = B;\
    B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) for(int i = 0; i < SIZE - 1; i++) \
{ \
    for(int j = 0; j < SIZE - i - 1; j++) \
    { \
        if(ARRAY[j] COMPARE ARRAY[j + 1]) \
        { \
            SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
        } \
    } \
}


int main()
{
    int arr[] = {10, 5, 2, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before sorting: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("After sorting in descending order: ");
    
    SORT(arr, size, int, >);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}