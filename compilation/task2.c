#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int i = b;
    while(i % a != 0 && i % b != 0)
    {
        i++;
    }

    printf("The smallest number divided by a and b is: %d\n");


    return 0;
}