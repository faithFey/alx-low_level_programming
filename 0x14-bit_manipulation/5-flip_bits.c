#include "main.h"

/**
 *flip_bits -returns the number of bits from flipping one number to another.
 *@n:first number.
 *@m:second number.
 *Return:number of bits changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;
	unsigned long int first;
	unsigned long int second = n ^ m;

	count = 0;
	for (i = 63; i >= 0; i--)
	{
		first = second >> i;
		if (first & 1)
			count++;
	}
	return (count);
}
