#include <stdio.h>
#include "main.h"

/**
 *factorial - calculates factorial of a number
 *@n:input number
 *Return:returns the results of the factorial
 */
int factorial(int n)
{
	/** base case */
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
