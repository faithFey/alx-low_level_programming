#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints the opcodes of its own main function.
 *@argc:number of arguments
 *@argv:array of arguments
 *Return:0
 */
int main(int argc, char *argv[])
{
	int byte, i;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	c = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", c[i]);
			break;
		}
	printf("%02hhx", c[i]);
	}
	return (0);
}
