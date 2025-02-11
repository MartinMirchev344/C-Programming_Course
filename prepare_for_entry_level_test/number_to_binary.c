#include <stdio.h>

long number_to_binary(int num)
{
    int binaryNum[32];
    long binary = 0;
    int i = 0;
    while (num > 0) {


        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }


    for (int j = i - 1; j >= 0; j--)
    {
        binary = binary * 10 + binaryNum[j];
    }

    return binary;
}

int main()
{

    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    long binary = number_to_binary(num);

    printf("Binary equivalent: %ld", binary);

    
    return 0;
}