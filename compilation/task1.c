#include <stdio.h>

#define SQUARE(A, B) (((A) + (B)) * ((A) + (B)))

int main()
{
    int a = 3, b = 4;

    printf("The square of %d + %d is: %d\n", a, b, SQUARE(a, b));

    return 0;
}