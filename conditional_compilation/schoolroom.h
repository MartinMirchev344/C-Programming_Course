#ifndef SCHOOLROOM_H_
#define SCHOOLROOM_H_

#include "person.h"

struct SchoolRoom
{
    int number;
    struct Person people_in_room[50];
};
#endif

