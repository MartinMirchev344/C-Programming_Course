#include <stdio.h>
#include <limits.h>

int main() {
    printf("%-10s %-10s %-15s %-25s %-25s %-15s %-25s\n", "Type", "Format", "Size (bytes)", "Signed Max Value", "Signed Min Value", "Unsigned Format", "Unsigned Max Value");


    printf("%-10s %-10s %-15lu %-25d %-25d %-15s %-25u\n", 
        "char", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%c", UCHAR_MAX);

    printf("%-10s %-10s %-15lu %-25d %-25d %-15s %-25u\n", 
        "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);

    printf("%-10s %-10s %-15lu %-25d %-25d %-15s %-25u\n", 
        "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);

    printf("%-10s %-10s %-15lu %-25ld %-25ld %-15s %-25lu\n", 
        "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);

    printf("%-10s %-10s %-15lu %-25lld %-25lld %-15s %-25llu\n", 
        "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    return 0;
}