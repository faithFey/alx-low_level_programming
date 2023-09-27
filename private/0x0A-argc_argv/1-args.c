#include "main.h"
#include <stdio.h>

/**
 *main- prints the numbers of arguments
 *@argc:argument counter
 *@argv:argument vector
 *Return: return 0 on success.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

