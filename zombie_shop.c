#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler(int sig) {
        wait(0);
}

int main (void)
{
        signal(SIGCHLD, &sighandler);
        pid_t pid = fork();
        if (pid == 0) {
                fprintf(stdout, "Child of Shapoval is finished\n");
                _exit(0);
        }
        else {
                sleep(3*4);
        }
return EXIT_SUCCESS;
}
© 2022 GitHub, Inc.