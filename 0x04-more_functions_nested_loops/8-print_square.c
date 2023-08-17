#include "main.h"

/**
 *print_square - print the square of the input number.
 *@size: the number to be squared.
 *Return:return the squared size.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
			_putchar('\n');
		}
	}
}
