#include <stdio.h>

/**
 *puts2 -  prints every other character of a string
 *@str:character to be tested.
 *Return:returns nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
