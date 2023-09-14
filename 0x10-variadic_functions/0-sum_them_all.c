#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all- returns the sum of all the parameters
 *@n: the number of parameters passed to the function
 *@...:variable number to parameters
 *Return:returns 0 when n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
		va_end(ap);

	return (sum);
}
