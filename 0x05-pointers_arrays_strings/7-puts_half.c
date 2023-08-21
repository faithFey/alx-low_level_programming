#include "main.h"

/**
 *puts_half -function that prints the second half of the string.
 *@str: the characters to be tested.
 *Return: the second half of the string.
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	for (j = 0; str[j] != '\0'; j++)
		i++;
	k = (i / 2);
	if ((i % 2) == 1)
	{
		k = ((i + 1) / 2);
	}
	for (j = k; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
