#include <stdio.h>

int main()
{
    int a, mult = 1;

    printf("Type in your number:");
    scanf("%d", &a);

    while(a!=0)
    {
        mult *= a % 10;
        a /= 10;
    }

    printf("The multiplication of digits is: %d", mult);

    return 0;
}