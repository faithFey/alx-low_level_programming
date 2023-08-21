#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints chacters in reverse order.
 *@s:character to be tested.
 *Return:returns nothing.
 */

void print_rev(char *s)
{
	int i;
	int length;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
