#include <stdio.h>

#define ARRAY_SIZE 6

int main() 
{
    #if defined(ARRAY_SIZE) && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
    int a = 1;
    int array[ARRAY_SIZE];
        
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        array[i] = a;  
        a *= 2;
    }
        
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        printf("%d\n", array[i]);
    }
    #else
        printf("The size is not defined or not a valid.\n");
    #endif


    return 0;
}