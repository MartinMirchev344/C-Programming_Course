#include <stdio.h>

#define HELPER(A) printf("The name of the variable is "#A" and its value is %d \n", A); \
printf("It is in %s\n", __FILE__); \
printf("Code for printing on line: %d\n", __LINE__) ;

int main()
{
    int x = 10;
    HELPER(x);
    
    return 0;
}