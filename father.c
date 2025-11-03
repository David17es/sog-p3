#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int father(int pid) 
{
	printf("Hi THERE, I am the father, and  I am %d\n", pid);
	printf("Now will will change the code to the `free` executable code\n");

	// Exec to free to get the memory report
    if (execvp("free", NULL) < 0) {
		perror("Error exec free executable");
		exit(-1);
	}

	exit(0);
}
