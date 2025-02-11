#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "safeint.h"

SafeResult safeadd(int a, int b) 
{
    SafeResult result;
    long long sum = (long long)a + b;  

    if(sum > INT_MAX ) 
    {
        printOverflowMessage();
        result.errorflag = 1; 
        result.value = 0;
    } 
    else if(sum < INT_MIN)
    {
        printUnderflowMessage();
        result.errorflag = 1;  
        result.value = 0;
    }
    else 
    {
        result.errorflag = 0;  
        result.value = (int)sum;
    }

    return result;
}


SafeResult safesubtract(int a, int b) 
{
    SafeResult result;
    long long diff = (long long)a - b; 

    if(diff > INT_MAX) 
    {
        printOverflowMessage();
        result.errorflag = 1;  
        result.value = 0;
    } 
    else if(diff < INT_MAX)
    {
        printUnderflowMessage();
        result.errorflag = 1;  
        result.value = 0;
    }
    else 
    {
        result.errorflag = 0;
        result.value = (int)diff;
    }

    return result;
}


SafeResult safemultiply(int a, int b) 
{
    SafeResult result;
    long long product = (long long)a * b;  

    if(product > INT_MAX) 
    {
        printOverflowMessage();
        result.errorflag = 1;  
        result.value = 0;
    } 
    else if(product < INT_MIN)
    {
        printUnderflowMessage();
        result.errorflag = 1;  
        result.value = 0;
    }
    else 
    {
        result.errorflag = 0;
        result.value = (int)product;
    }

    return result;
}


SafeResult safedivide(int a, int b) 
{
    SafeResult result;

    if(b == 0) 
    {
        result.errorflag = 1;  
        result.value = 0;
    } 
    else 
    {
        long long division = (long long)a / b;  

        if(division > INT_MAX) 
        {
            printOverflowMessage();
            result.errorflag = 1; 
            result.value = 0;
        } 
        else if(division < INT_MIN)
        {
            printUnderflowMessage();
            result.errorflag = 1;  
            result.value = 0;
        }
        else 
        {
            result.errorflag = 0;
            result.value = (int)division;
        }
    }

    return result;
}

SafeResult safestrtoint(char *str)
{
    SafeResult result;
    int num = 0;
    int sign = 0;
    int begin = 0;
    int size = len(str);

    if(str[0] == '-')
    {
        sign = -1;
        begin = 1;
        size--;
    }
    else if(str[0] == '+')
    {
        sign = 1;
        begin = 1;
        size--;
    }
    else
    {
        sign = 1;
    }

    for(int i = begin; i < size; i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            result.errorflag = 1;
            result.value = 0;
            return result;
        }
        num = num * 10 + (str[i] - '0');
    }

    result.errorflag = 0;
    result.value = num;

    return result;
    
}

