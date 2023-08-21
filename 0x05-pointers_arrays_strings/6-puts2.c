#include <stdio.h>

/**
 *puts2 -  prints every other character of a string
 *@str:character to be tested.
 *Return:returns nothing.
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	int j;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
