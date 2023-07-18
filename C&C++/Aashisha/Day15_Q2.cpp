#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
void function(int);
void function(int y)
{
	float fy;
	if (y==0)
	{
		printf("Division by Zero is not allowed");
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		fy = 10 / y;
		printf("f(y) is: %.5f", fy);
	}
}
int main()
{
	FILE * fp;
	fp = fopen("file.txt", "rb");
	if (fp == NULL)
	{
    	printf("Value of errno: %d\n ", errno);
    	printf("The error message is : %s\n", strerror(errno));
    	perror("Message from perror");
    	exit(EXIT_FAILURE);
		printf("I will not be printed\n");
	}
	else
	{
		fclose (fp);
		exit(EXIT_SUCCESS);
		printf("I will not be printed\n");
	}
	int x = 10;
	function(x);
	return 0;
}
