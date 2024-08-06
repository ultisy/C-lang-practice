// ex_cmdarg.c : Code to check and print Command line arguments
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Number of arguments: %d\n", argc);
	if (argc < 2)	// Check the number of arguments
		printf("%s: no argument..\n", argv[0]);
	else		// If arguments exist..
		for (int i = 1; i < argc; ++i)  // Process the string one by one
			if (*argv[i] == '-')	// If string begins with '-'..
				printf("option: %c\n", argv[i][1]);
	return 0;
}
