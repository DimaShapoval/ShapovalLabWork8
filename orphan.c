#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
	pid_t pid = fork();
        int i;
        if(pid != 0) {
                sleep(4+1);
                _exit(0);
        }
        else {
                for (i=0;i<(2*4+1); i++) {
                        printf("Parent of Shapoval %d\n", getppid());
                        sleep(1);
                }
        }
return 0;
}