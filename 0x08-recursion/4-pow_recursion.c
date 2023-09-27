#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - calculates the value of x raised to the power of y
 *@x:the first number
 *@y:the second number
 *Return:returns result of power.
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
