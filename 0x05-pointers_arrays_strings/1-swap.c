#include "main.h"

/**
 *swap_int - exchange the value of a and b.
 *@a:The first value.
 *@b:The second value.
 *Return: returns nothing.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
