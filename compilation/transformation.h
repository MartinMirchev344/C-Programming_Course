#ifndef TRANSFORMATION_H_
#define TRANSFORMATION_H_

struct transformation 
{
    long result;
    char error[100];
};

struct transformation transform(char str[10]);

#endif