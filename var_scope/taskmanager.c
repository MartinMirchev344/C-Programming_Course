#include <stdio.h>
#include "processes.h"

int main()
{
    while(1)
    {
        int option;
        printf("Choose an option: \n");
        printf("1. Create new process\n");
        printf("2. List all processes\n");
        printf("3. Stop process\n");
        printf("4. Exit\n");
        scanf("%d", &option);

        if(option == 1)
        {
            char name[30];
            printf("Enter process name: ");
            scanf("%s", name);
            int id = createnewprocess(name);
            if(id > 0) printf("Created process with ID - %d\n", id);
        }
        else if(option == 2)
        {
            if(processescount == 0) printf("No processes created\n");
            else
            {
                printf("List of processes:\n");

                for(int i = 0; i < processescount; i++)
                {
                    printf("ID - %d process -  %s\n", processes[i].id, processes[i].name);
                }
            }
        }
        else if(option == 3)
        {
            int id;
            printf("Enter process ID to stop: ");
            scanf("%d", &id);

            stopprocess(id);

            printf("Process with ID - %d stopped\n", id);
        }
        else if(option == 4)
        {
            break;
        }

    }



    return 0;
}