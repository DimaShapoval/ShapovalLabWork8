#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main (int argc, char * argv[]) {
    pid_t pid;
    if (argc == 1) {
       fprintf(stderr, "Usage: %s <pid>\n", argv[0]);
       exit(1);
    }
    pid = (pid_t) atoi(argv[1]);
    if (!kill(pid, SIGUSR2)) {
       printf("Send signal to process with PID=%d\n", pid);
    } else {
       fprintf(stderr, "Eror\n");
    }
    return EXIT_SUCCESS;
}