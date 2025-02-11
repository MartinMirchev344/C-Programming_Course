#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command

#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(print, message)
{
    printf("Hello!\n");
}


DEFINE_COMMAND(calculate, sum)
{
    int a = 5, b = 10;
    printf("Sum: %d\n", a + b);
}

int main()
{
    message_print_command();
    sum_calculate_command();


    return 0;
}