#include <stdio.h>

int binary_search(int array[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == target)
            return mid;

        if (array[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int array[6] = {1, 10, 7, 5, 8, 2};
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int change = array[i];
                array[i] = array[j];
                array[j] = change;
            }
        }
    }
    int target;
    printf("Enter the wanted number: ");
    scanf("%d", &target);

    int index = binary_search(array, size, target);

    if (index == -1)
    {
        printf("Number not found in the array.\n");
    }
    else printf("The number is on index %d", index);


    return 0;
}