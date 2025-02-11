#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    if (num <= 1)
        return false;

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0 && num != i) return false;
    }
    
    return true;
}

int main()
{
    int sum = 0;
    int array[8] = {1, 7, 10, 15, 16, 13, 23, 30}; 

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        if(is_prime(array[i]) == true)
        {
            sum += array[i];
        }
    }

    printf("Sum of prime numbers: %d\n", sum);


    return 0;
}
