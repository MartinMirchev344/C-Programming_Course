#ifndef PROCESSES_H_
#define PROCESSES_H_

struct Process
{
    int id;
    char name[30];
};

static int ID_current = 1;

int createnewprocess(char name[30]);

void stopprocess(int id);

static int nextprocessid();

extern struct Process processes[5];

extern int processescount;


#endif