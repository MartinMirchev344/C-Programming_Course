#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char** argv) 
{

    SafeResult result = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    result = safesubtract(result.value, b.value);
    if(result.errorflag) 
    {
        return 0;
    }

    printf("Result: %d\n", result.value);

    
    return 0;
}