// #include "types.h"
// #include "stat.h"
// #include "user.h"
// #include "fcntl.h"

// int
// main(int argc, char *argv[])
// {
//     mycall();
//     exit();
// }

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    struct uproc procs[NPROC];
    int n = mycall(procs);  // pass array

    char *states[] = {"UNUSED", "EMBRYO", "SLEEPING", "RUNNABLE", "RUNNING", "ZOMBIE"};
    printf(1, "name\tpid\tstate\truntime\twaittime\n");

    for(int i = 0; i < n; i++){
        printf(1, "%s\t%d\t%s\t%d\t%d\n",
               procs[i].name,
               procs[i].pid,
               states[procs[i].state],
               procs[i].runtime,
               procs[i].waittime);
    }

    exit();
}