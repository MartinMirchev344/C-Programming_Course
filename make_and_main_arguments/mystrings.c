#include <stdio.h>
#include "mystrings.h"

int strlength(char *str)
{
    int len = 0;
    while (*str!= '\0')
    {
        len++;
        str++;
    }
    
    return len;
}

void strconcat(char *str1, char *str2)
{
    int len1 = strlength(str1);
    int len2 = strlength(str2);

    
    char result[100];
    
    
    int i;
    for(i = 0; i < len1; i++)
    {
        result[i] = str1[i];
    }

    
    for(i = 0; i < len2; i++)
    {
        result[len1 + i] = str2[i];
    }

    
    result[len1 + len2] = '\0';

    printf("Result: %s\n", result);
    
}

int strcompare(char *str1, char *str2)
{
    int len1 = strlength(str1);
    int len2 = strlength(str2);
    int result;
    
    if(len1 == len2)
    {
        for(int i = 0; i < len1; i++)
        {
            if(str1[i] == str2[i])
            {
                result = 0;
            }
            else if(str1[i] < str2[i])
            {
                return result = -1;
            }
            else return result = 1;

            
        }
    }
    else if(len1 < len2)
    {
        for(int i = 0; i < len1; i++)
        {
            if(str1[i] == str2[i])
            {
                result = 0;
            }
            else if(str1[i] < str2[i])
            {
                return result = -1;
            }
            else return result = 1;
        }
        if(result == 0)
        {
            return -1;
        }
    }

    else if(len1 > len2)
    {
        for(int i = 0; i < len2; i++)
        {
            if(str1[i] == str2[i])
            {
                result = 0;
            }
            else if(str1[i] < str2[i])
            {
                return result = -1;
            }
            else return result = 1;
        }
        if(result == 0)
        {
            return 1;
        }
    }
    
    return 0;
}