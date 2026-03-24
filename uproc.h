#ifndef UPROC_H
#define UPROC_H

#define NPROC 64

struct uproc {
    int pid;
    int runtime;
    int waittime;
    int state;
    char name[16];
};

#endif