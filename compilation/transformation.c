#include "transformation.h"
#include <string.h>

struct transformation transform(char str[10]) 
{
    struct transformation result = {0, "\0"};


    if(!str || str[0] == '\0') 
    {
        strcpy(result.error, "Empty input string");
        return result;
    }

    if(str[0] != '-' && str[0] != '+' && (str[0] < '0' || str[0] > '9')) 
    {
        strcpy(result.error, "Invalid input string");
        return result;
    }

    for(int i = 1; str[i] != '\0'; i++) 
    {
        if(str[i] < '0' || str[i] > '9') 
        {
            strcpy(result.error, "Empty input string");
            result.error[i] = '\0';
            return result;
        }
    }


    long value = 0;
    int sign = 1;
    int i = 0;

    if(str[0] == '-') 
    {
        sign = -1;
        i++;
    } 
    else if(str[0] == '+') 
    {
        i++;
    }

    for(; str[i] != '\0'; i++) 
    {
        value = value * 10 + (str[i] - '0');
    }

    result.result = value * sign;
    return result;
}
