#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *leet- to encode a string
 *@array: string to be tested.
 *Return:returns an encoded string.
 */
char *leet(char *array)
{
	int i;

	for (i = 0; array[i] != '\0'; i++)
	{
		char c = array[i];
		int isUpperCase = (c >= 'A' && c <= 'Z');

		if (isUpperCase)
		{
			c += ('a' - 'A');
		}
		if (c == 'a' || c == 'e' || c == 'o' || c == 't' || c == 'l')
		{
			if (c == 'a' || c == 'A')
			{
				array[i] = '4';
			}
			else if (c == 'e' || c == 'E')
			{
				array[i] = '3';
			}
			else if (c == 'o' || c == 'O')
			{
				array[i] = '0';
			}
			else if (c == 't' || c == 'T')
			{
				array[i] = '7';
			}
			else if (c == 'l' || c == 'L')
			{
				array[i] = '1';
			}
		}
	}
	return (array);
}
