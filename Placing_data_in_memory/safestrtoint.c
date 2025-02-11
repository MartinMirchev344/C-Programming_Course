#include <string.h>
#include <stdio.h>
#include "util.h"
#include "safeint.h"


int main(int argc, char **argv)
{
    SafeResult result =  safestrtoint(argv[1]);

    if(result.errorflag == 0)
    {
        printf("Result: %d\n", result.value);
    }


    return 0;
}