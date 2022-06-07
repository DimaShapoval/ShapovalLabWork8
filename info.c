#include <stdio.h>
#include <unistd.h>

int main (void) {
	fprintf(stderr, "I am process!\n");
	fprintf(stderr, "My process group id is %d\n", getpgrp());
	fprintf(stderr, "My pid is %d\n", getpid());
	fprintf(stderr, "My parent pid is %d\n", getppid());
	fprintf(stderr, "My user id is %d\n", getuid());
	fprintf(stderr, "My user's group id is %d\n", getgid());
	return 0;
}