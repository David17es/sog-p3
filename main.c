#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "father.h"
#include "child.h"



int main()
{
	int pid;

    printf("This is new version \n");

	pid=fork();
	if (pid==0) {
		// This is the child code
		child(pid);
	} else {
		// This is the father  code
		father(pid);
	}

}
