#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv)
{

    int size = strlength(argv[1]);
    printf("Length of string: %d\n", size);


    return 0;
}