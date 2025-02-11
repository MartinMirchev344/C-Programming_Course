#include <stdio.h>

#define SIZE_ARRAY 5

int main() 
{
    int arr[SIZE_ARRAY] = {10, 45, 14, 15, 68};

    #ifdef _WIN32
    for(int i = 0; i < SIZE_ARRAY; i++) 
    {
        for(int j = 0; j < SIZE_ARRAY - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    

    #elif defined __linux__
    int temp, minIndex;
    for (int i = 0; i < n - 1; i++) 
    {
        minIndex = i;
        
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }

        if(minIndex != i) 
        {
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
    #elif defined __APPLE__
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];  
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; 
    }
    #else
    int temp;
    int start = 0;
    int end = SIZE_ARRAY - 1;
    while (start < end) 
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    #endif

    for(int i = 0; i < SIZE_ARRAY; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}