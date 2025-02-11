#include <stdio.h>

#define COMPARE(A,B) ((A) > (B)) ? (A) : (B)

int main()
{
    int a = 10;
    int b = 16;
    int max;

    max = COMPARE(a, b);

    printf("The bigger number is %d\n", max);

    return 0;
}