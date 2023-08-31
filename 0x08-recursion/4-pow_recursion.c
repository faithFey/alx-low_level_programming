#include<stdio.h>
#include "main.h"

/**
 *_pow_recursion - prints the power of a number
 *@x:first number;
 *@y:last number
 *Return:returns the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	/*base case */
	if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
