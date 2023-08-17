#include "main.h"

/**
 *print_diagonal -draws a diagonal line on the terminal
 *@n:The number of lines to draw.
 *Return:return the diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
