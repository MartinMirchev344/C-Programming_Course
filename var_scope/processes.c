#include <stdio.h>
#include <string.h>
#include "processes.h"

void print()
{
    int i;
    for(i = 0; i < processescount; i++)
    {
        if(processes[i].id > 0)
            printf("Process ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

struct Process processes[5];

int processescount = 0;

static int nextprocessid()
{
    if(ID_current < 0) return 0;

    return ID_current++;
}

int createnewprocess(char name[30])
{
    if(processescount == 5) 
    {
        printf("Can't run more than 5 processes at a time\n");
        return 0;
    }
    
    processes[processescount].id = nextprocessid();
    strcpy(processes[processescount].name, name);

    processescount++;

    return processes[processescount-1].id;
}

void stopprocess(int id)
{
    if(id <= 0)
    {
        printf("Invalid process ID\n");
        return;
    }

    for(int i = 0; i < processescount; i++)
    {
        if(processes[i].id == id)
        {
            processes[i].id = 0;
            strcpy(processes[i].name, "\0");
            break;
        }
    }

    for(int i = 0; i < processescount - 1; i++)
    {
        if(processes[i].id == 0)
        {
            struct Process temp;
            temp = processes[i + 1];
            processes[i + 1] = processes[i];
            processes[i] = temp;
        }
    }

    processescount--;
}
