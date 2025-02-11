#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv)
{
    int result = strcompare(argv[1], argv[2]);

    printf("result: %d\n", result);    

    return 0;
}