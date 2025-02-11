#include <stdio.h>
#include "transformation.h"


int main()
{
    char num[3] = {1,2,3};

    struct transformation result = transform(num);

    printf("Result: %s\n", result.result);
    printf("Error: %s\n", result.error);

    return 0;
}