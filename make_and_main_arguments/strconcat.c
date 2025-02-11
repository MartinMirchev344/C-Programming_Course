#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv)
{

    if(strlength(argv[1])> 50)
    {
        printf("String length can't be more than 50\n");
        return 0;
    }
    else if(strlength(argv[2])> 50)
    {
        printf("String length can't be more than 50\n");
        return 0;
    }

    strconcat(argv[1], argv[2]);



    return 0;
}