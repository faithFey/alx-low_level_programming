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
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
		va_end(a);

	return (sum);
}
