#include <stdio.h>

/**
 *factorial- factorial of a number.
 *@n:the number to be tested.
 *Return:results the results
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

