#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_datetime()
{
	time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
    printf("Formatted time: %s\n", buffer);
}

int child(int pid) 
{
   	printf("Hi There, I am the child, and  I am %d\n", pid);
	print_datetime();
	exit(0);
}
