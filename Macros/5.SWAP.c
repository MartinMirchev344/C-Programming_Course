#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A;\
    A = B;\
    B = temp;\

int main()
{
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    SWAP(num1, num2, int);
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
