#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);
    int biggest_index = 0;
    int biggest_value = 0;

    for(int i = 0; i < length; i++)
    {
        if(word[i] > biggest_value)
        {
            biggest_value = word[i];
            biggest_index = i;
        }
    }

    printf("The biggest character is '%c' at index %d\n", biggest_value, biggest_index);


    return 0;
}