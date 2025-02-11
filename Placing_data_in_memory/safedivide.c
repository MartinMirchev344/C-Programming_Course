#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char** argv) 
{
    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);
    SafeResult result;

    result = safedivide(result.value, b.value);

    if(result.errorflag) 
    {
        return 1;
    }

    printf("Result: %d\n", result.value);


    return 0;
}