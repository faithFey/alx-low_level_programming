#include <stdio.h>

/**
 *puts2 -  prints every other character of a string
 *@str:character to be tested.
 *Return:returns nothing.
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	int o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
