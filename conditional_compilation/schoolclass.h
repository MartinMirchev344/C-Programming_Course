#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_

#include "person.h"

struct SchoolClass
{
    struct Person Class[26];
    char class_name;
    int class_number;
    struct Person Teacher;
};

#endif