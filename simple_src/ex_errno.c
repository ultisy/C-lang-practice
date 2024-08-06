// ex_errno.c : Print Error number using errno.h
#include <errno.h> // Declare errno function
#include <stdio.h> // Declare Standard error message function - perror(char *)
#include <string.h> // Declare Standard error message function - stderror(int)
#include <fcntl.h>

int main(int argc, char *argv[])
{
	FILE *fp;

	fp = fopen(argv[1], "r"); // If Error is ocurred, it will be set in 'errno' automatically
	printf("Error number : %d >> ", errno);
	printf("%s \n", strerror(errno));
	perror("My msg");
	if (fp)	// The case of opening file normally
		close(fd);
	return 0;
}
