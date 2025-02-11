#include <stdio.h>

void printState(unsigned char state) 
{
    size_t bitCount = sizeof(state) * 8;
    for(char i = bitCount - 1; i >=0; i--) 
    {
        printf("Light %d - %u\n", i + 1, (state >> i) & 1);
    }
}

void switchLights(unsigned char *lights)
{
    printf("Enter which light to switch: ");

    int num;
    scanf("%d", &num);
    if((*lights >> num) & 1) 
    {
        unsigned char light = 1 << (num - 1);
        *lights &= ~light;
        printf("Light %d switched off\n", num);
    }
    else
    {
        unsigned char light = 1 << (num - 1);
        *lights |= light;
        printf("Light %d switched on\n", num);
    }
}

int main(void)
{
    unsigned char lights = 0;
    int choice;
    while(choice != 3)
    {
        printf("1.Switch lights\n");
        printf("2.Print state\n");
        printf("3.Exit\n");
        printf("Enter your choice: ");

    
        scanf("%d", &choice);

        if(choice == 1)
        {
            switchLights(&lights);   
        }
        else if(choice == 2)
        {
            printState(lights);
        }
    }


    return 0;
}