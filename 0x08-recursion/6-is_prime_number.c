#include "main.h"
#include <stdio.h>

int primeChecker(int n, int stop, int i);
/**
 *is_prime_number - checks if a number is prime
 *@n:input number
 *Return:returns 0 or 1.
 */
int is_prime_number(int n)
{
	/*returns 1 if the input integer is a prime number, otherwise return 0*/
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
		return (primeChecker(n, n / 2, 2));
}
/**
 *primeChecker - checks if a number is prime
 *@n:input number
 *@stop:terminator character
 *@i:increamental character
 *Return:returns 0 or 1;
 */
int primeChecker(int n, int stop, int i)
{
	if (n % i == 0)
	{
		return (0);
		}
		else if (i >= stop)
		{
		return (1);
		}
		else
			return (primeChecker(n, stop, i + 1));
}
